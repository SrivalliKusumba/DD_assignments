#include<linux/init.h>
#include<linux/module.h>
#include<linux/moduleparam.h>
#include "Header.h"

MODULE_LICENSE("GPL");
MODULE_AUTHOR("SriV");

static int c=0;
static int d=0;

module_param(c, int, S_IRUGO);
module_param(d, int, S_IRUGO);
static int __init avg_init(void)
{
	int average;
	printk("Average of two numbers\n");
	average = add(10,20)/2;
	printk("the average is %d\n",average);
	return 0;
}

static void __exit avg_exit(void)
{
	printk("Exit\n");
}

module_init(avg_init);
module_exit(avg_exit);

