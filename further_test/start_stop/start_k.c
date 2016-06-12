/* 
* start_k.c - Illustration for multi filed modules
* By AK
*/

#include <linux/module.h>
#include <linux/kernel.h>

int init_module(void)
{
	printk(KERN_INFO "This is the start file.\n");
	return 0;
}

