/*
 * =====================================================================================
 *
 *       Filename:  number_softirq.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  12/15/2012 03:30:20 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Tom Xue (TOMXUE), tomxue0126@gmail.com
 *        Company:  
 *
 * =====================================================================================
 */

#include <linux/init.h>
#include <linux/module.h>
#include <linux/interrupt.h>

MODULE_LICENSE("Dual BSD/GPL");

spinlock_t myspinlock;

static int hello_init(void)
{
	printk(KERN_ALERT "tomxue: Hello, world\n");
    printk(KERN_ALERT "tomxue: NR_SOFTIRQS is %d\n", NR_SOFTIRQS);
	return 0;
}

static void hello_exit(void)
{
	printk(KERN_ALERT "tomxue: Goodbye, cruel world\n");
}

module_init(hello_init);
module_exit(hello_exit);
