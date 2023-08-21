#include "../includes/ft_lib.h"

void ft_stdin(void)
{
	char buffer;
	while (read(0, &buffer, 1) != 0)
		write(1, &buffer, 1);
}
