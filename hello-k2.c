/*
* hello-k2.c - For demonstrating the use of init.h library
* By AK
*/

#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/init.h>

#define DRIVER_AUTHOR "Abhishek Kumar<abhishekism0010@gmail.com>"
#define DRIVER_DESC   "A sample driver."

static int hello_data __initdata = 2; //For initializing a variable use "__initdata" macro

static int __init hello_2_init(void)
{
	printk(KERN_INFO, "Init Hello World %d", hello_data);
	return 0;
}

static void __exit hello_2_exit(void)
{
	printk(KERN_INFO, "Goodbye 2");
}

module_init(hello_2_init)
module_exit(hello_2_exit)

MODULE_LICENSE("GPL");

MODULE_AUTHOR(DRIVER_AUTHOR);	/* Who wrote this module? */
MODULE_DESCRIPTION(DRIVER_DESC);	/* What does this module do */

MODULE_SUPPORTED_DEVICE("testdevice");
