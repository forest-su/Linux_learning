

#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/fs.h>
#include <linux/init.h>
#include <linux/delay.h>
#include <asm/uaccess.h>
#include <asm/irq.h>
#include <asm/io.h>
#include <asm/arch/regs-gpio.h>
#include <asm/hardware.h>



static int second_drv_open(struct inode *inode, struct file *file)
{
	return 0;

	
}
static ssize_t second_drv_write(struct file *file, const char __user *buf, size_t count, loff_t * ppos)
{

	return 0;
	
}


static struct file_operations first_drv_fops = {
    .owner  =   THIS_MODULE,   /* ����һ���꣬�������ģ��ʱ�Զ�������__this_module���� */
    .open   =   second_drv_open,        
	.write	=	second_drv_write,	   
};

