#include <linux/module.h>
#include <linux/string.h>
#include <linux/init.h>
#include <linux/device.h>
#include <linux/kernel.h>  

MODULE_LICENSE("Dual BSD/GPL");

static int __init module_init(void)
{

}

static void __exit module_exit(void)
{

}


module_init(module_init);
module_exit(module_exit);