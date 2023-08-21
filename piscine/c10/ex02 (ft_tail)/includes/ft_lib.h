#ifndef ft_lib
#define ft_lib

#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <fcntl.h>
#include <libgen.h>

extern char *g_program_name;
void	ft_display_file(int c, int fd, int argc, char **argv);
void	ft_putstr(char *str);
void	ft_putchar(char c);
void 	ft_display_error(int errnum, char *argv);
void 	ft_cat(int argc, char **argv);
void 	ft_stdin(void);
void 	ft_tail(int argc, char **argv);
int 	ft_atoi(char *str);
int 	ft_line_count(char *argv);
void 	ft_file_name(int c, int argc, char *argv);

#endif
