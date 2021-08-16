#include<linux/init.h>
#include<linux/module.h>
#include<linux/moduleparam.h>
#include "Header.h"

MODULE_LICENSE("GPL");

int a_test=10,b_test=20;

static int __init avg_init(void)
{
	int average;
	printk("Average of two numbers");
	average = add(a_test,b_test)/2;
	printk("The average is %d\n",average);
	return 0;
}

static void __exit avg_exit(void)
{
	printk("Exit\n");
}

module_init(avg_init);
module_exit(avg_exit);

