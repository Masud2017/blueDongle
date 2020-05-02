/*
	Author : Md.Masud karim
	License : GPL ( GNU generel public license )
	Purpose: Interect with bluetooth input output for a bluetooth usb dongle
*/
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/usb/ch9.h>

#include "src/bluetooth.h"
#include "src/receiver.h"
#include "src/sender.h"

MODULE_LICENSE("GPL");
MODULE_AUTHOR("MD.MASUD KARIM");
MODULE_DESCRIPTION("BLUETOOTH DONGLE USB DRIVER FOR LINUX VERSION : 1.0");

int __init entryPoint() {

	printk(KERN_INFO "Hello world");
}
void __exit exitPoint(void) {
	printk(KERN_INFO "Good bye");
}

module_init(entryPoint);
module_exit(exitPoint);