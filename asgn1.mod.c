#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
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
	{ 0x425785a6, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xb35df6a4, __VMLINUX_SYMBOL_STR(seq_release) },
	{ 0xc5918067, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x227451dd, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x89ba0ccf, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0xba4bb6b5, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x9c1efe7d, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x191148f8, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x9cd9fd20, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x8abc5994, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x8531f886, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0xcb0c9f13, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x447457ef, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x718833ea, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x1d137244, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x6ec02431, __VMLINUX_SYMBOL_STR(cdev_alloc) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0xbd9953d4, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0xac22d20f, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x6ca500da, __VMLINUX_SYMBOL_STR(seq_open) },
	{ 0x6d2f4338, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xf7758357, __VMLINUX_SYMBOL_STR(remap_pfn_range) },
	{ 0xc44dcead, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0xf40dd778, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x10851d96, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x987c11c7, __VMLINUX_SYMBOL_STR(__pv_phys_pfn_offset) },
	{ 0x6394f6d3, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "44CADF844238A0ED3367750");
