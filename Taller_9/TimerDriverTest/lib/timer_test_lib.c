
#include "timer_test_lib.h"

#define DEVICE_PATH "/dev/timer"

int open_timer_device() {
    return open(DEVICE_PATH, O_RDWR);
}

ssize_t read_from_timer_device(int fd, char *buffer, size_t len) {
    return read(fd, buffer, len);
}

ssize_t write_to_timer_device(int fd, const char *buffer, size_t len) {
    return write(fd, buffer, len);
}

int close_timer_device(int fd) {
    return close(fd);
}
