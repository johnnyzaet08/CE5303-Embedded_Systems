
/* Header file for the timer driver */

#ifndef TIMER_H
#define TIMER_H

#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/fs.h>
#include <linux/errno.h>
#include <linux/types.h>
#include <linux/proc_fs.h>
#include <linux/fcntl.h>
#include <linux/uaccess.h>
#include <linux/ioport.h>
#include <asm/io.h>

/* Local defined macros */
#define BUF_LEN 80
#define DEVICE_NAME "timer"
#define SUCCESS 0

extern static unsigned RANGE;
extern static unsigned TIMER_BASE;
extern static char msg[BUF_LEN];
extern static char *msg_Ptr;
extern static int Device_Open;
extern u8 *addr;

/* Declaration of timer.c functions */
int timer_open(struct inode *inode, struct file *filp);
int timer_release(struct inode *inode, struct file *file);
ssize_t timer_read(struct file *filp, char *buf, size_t count, loff_t *f_pos);
ssize_t timer_write(struct file *filp, const char *buf, size_t count, loff_t *f_pos);

#endif // TIMER_H
