#include<linux/init.h>
#include<linux/module.h>
#include<linux/kernel.h>

MODULE_LICENSE("GPL");

static int add(int a,int b)
{
	return (a+b);
}

EXPORT_SYMBOL(add);

static int __init add_init(void)
{
	printk("Addition result is : %d",add(10,20));
	return 0;
}

static void __exit add_exit(void)
{
	printk("Exit\n");
}

module_init(add_init);
module_exit(add_exit);
