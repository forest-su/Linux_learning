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



static int first_drv_open(struct inode *inode, struct file *file)
{
	printk( "first_drv_open\n");
	return 0;
  
  
}

static ssize_t first_drv_write(struct file *file, const char __user *buf, size_t count, loff_t * ppos)
{
	return 0;
}

static struct file_operations first_drv_fops = {
    .owner  =   THIS_MODULE,   /* ÕâÊÇÒ»¸öºê£¬ÍÆÏò±àÒëÄ£¿éÊ±×Ô¶¯´´½¨µÄ__this_module±äÁ¿ */
    .open   =   first_drv_open,        
	.write	=	first_drv_write,	   
};



int first_drv_init(void)
{
	major=register_chrdev(0,"first_drv",&first_drv_fops);//×¢²áÇı¶¯³ÌĞò£¬¸æËßÄÚºË

<<<<<<< HEAD
	major = register_chrdev(0,"first_drv",&first_drv_fops);//×¢²áÇı¶¯³ÌĞò£¬¸æËßÄÚºË
	return 0;
=======
>>>>>>> parent of df8b572... æ‰‹åŠ¨åˆ†é…è®¾å¤‡å·
	
	return 0;
}

int first_drv_exit(void)
{
	unregister_chrdev(111, "first_drv");//Ğ¶ÔØ
}
module_init(first_drv_init);

module_exit(first_drv_exit);




