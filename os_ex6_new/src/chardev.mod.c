#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x49b9b02b, "module_layout" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x6ac67c1c, "__register_chrdev" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x8f64aa4, "_raw_spin_unlock_irqrestore" },
	{ 0x9327f5ce, "_raw_spin_lock_irqsave" },
	{ 0x27e1a049, "printk" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "433345289745D72CEFB584C");