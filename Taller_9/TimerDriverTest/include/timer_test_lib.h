
#ifndef TIMER_TEST_LIB_H
#define TIMER_TEST_LIB_H

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/ioctl.h>

// Function prototypes
int open_timer_device();
ssize_t read_from_timer_device(int fd, char *buffer, size_t len);
ssize_t write_to_timer_device(int fd, const char *buffer, size_t len);
int close_timer_device(int fd);

#endif // TIMER_TEST_LIB_H
