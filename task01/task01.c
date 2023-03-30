#include <linux/init.h>
#include <linux/module.h>
#include <linux/printk.h>

// (void) is NEEDED instead of () because
// modules are compiled with an archaic C
// compiler
static int __init task01_init(void){
	pr_info("Hello World!\n");
	return 0;
}

static void __exit task01_fini(void){
	pr_info("Goodbye World!\n");
}

module_init(task01_init);
module_exit(task01_fini);

MODULE_LICENSE("BSD");

