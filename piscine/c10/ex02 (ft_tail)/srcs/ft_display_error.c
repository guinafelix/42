#include "../includes/ft_lib.h"

void ft_display_error(int errnum, char *argv)
{
	ft_putstr((char *)g_program_name);
	ft_putstr(": ");
	ft_putstr(argv);
	ft_putstr(": ");
	ft_putstr(strerror(errnum));
	ft_putchar('\n');
}
