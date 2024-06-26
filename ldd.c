#include <linux/init.h>
#include <linux/module.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Anikeh J");
MODULE_DESCRIPTION("First Loadable Kernel Module");

static int module__init (void)  {
  printk("Hello, Kernel!");
  return 0;
}

static void module__exit (void) {
  printk("Goodbye, Kernel!");
}

module_init(module__init)
module_exit(module__exit)
