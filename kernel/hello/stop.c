




#include <linux/kernel.h>
#include <linux/module.h>

void cleanup_module(void)
{
	printk(KERN_ALERT "This is cleanup_module member \n");
	
}

