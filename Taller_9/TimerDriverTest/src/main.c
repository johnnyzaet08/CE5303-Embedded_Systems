
#include "timer_test_lib.h"

int main() {
    int fd;
    char buffer[100];

    // Open the timer device
    fd = open_timer_device();
    if (fd < 0) {
        perror("Failed to open the timer device");
        return 1;
    }

    // Write to the timer device
    write_to_timer_device(fd, "1", 1);

    // Read from the timer device
    read_from_timer_device(fd, buffer, sizeof(buffer));
    printf("Read from timer device: %s\n", buffer);

    // Close the timer device
    close_timer_device(fd);

    return 0;
}
