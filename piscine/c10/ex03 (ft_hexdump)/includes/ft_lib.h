#ifndef ft_lib
#define ft_lib

#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <fcntl.h>
#include <libgen.h>

extern char *g_program_name;
void	ft_putstr(char *str);
void	ft_putchar(char c);
void 	ft_display_error(int errnum, char *argv);
void 	ft_stdin(void);
void 	ft_hexdump(int argc, char **argv);
void 	*ft_print_memory(void *addr, unsigned int size, int offset);
void 	ft_print_byte_hex(unsigned char byte);
void 	ft_print_hex_addr(int offset);
void 	ft_print_hex_content(char *str, int c, unsigned int size);
void 	ft_print_content (char *str, int c, unsigned int size);

#endif
