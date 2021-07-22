#include <linux/init.h>
#include <linux/module.h>
MODULE_LICENSE("GPL");
void printk_test(void)
{
	printk(KERN_EMERG "hello KERN_EMERG\n");
        printk(KERN_ALERT "hello KERN_ALERT\n");
        printk(KERN_CRIT "hello KERN_CRIT\n");
        printk(KERN_ERR "hello KERN_ERR\n");
        printk(KERN_WARNING "hello KERN_WARNING\n");
        printk(KERN_NOTICE "hello KERN_NOTICE\n");
        printk(KERN_INFO "hello KERN_INFO\n");
        printk(KERN_DEBUG "hello KERN_DEBUG\n");
        printk("hello default\n");
        printk(KERN_CONT "hello KERN_CONT\n");
        pr_info("this is %s\n","info fun");

}
static int hello_init(void)
{
	printk(KERN_INFO "hello init\n");
	printk_test();
	return 0;
}

static void hello_exit(void)
{
    printk(KERN_ERR"hello exit\n");
}

module_init(hello_init);
module_exit(hello_exit);
