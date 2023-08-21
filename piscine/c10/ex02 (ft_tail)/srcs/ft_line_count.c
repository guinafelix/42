#include "../includes/ft_lib.h"

int ft_line_count(char *argv) {
    int fd;
    char buffer;
    int r;
    int line_count = 0;

    if ((fd = open(argv, O_RDONLY)) == -1)
        ft_display_error(errno, argv);
    else {
        while ((r = read(fd, &buffer, 1))) {
            if (r == -1) {
                ft_display_error(errno, argv);
                break;
            }
            if (buffer == '\n') {
                line_count++;
            }
        }
        if (close(fd) == -1)
            ft_display_error(errno, argv);
    }
    return line_count;
}
