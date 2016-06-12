/*
* Kernel Module Example
* By AK
*/

#include <linux/module.h>  //needed by all kernel modules
#include <linux/kernel.h>  //needed forn kernel information and macros

int init_module(void)
{
	printk(KERN_INFO, "Hello World \n");
	
	/*
	* A non xero return means init module fails, 
	*/
	return 0;
}
void cleanup_module(void)
{
	printk(KERN_INFO, "Goodbye World");
}

