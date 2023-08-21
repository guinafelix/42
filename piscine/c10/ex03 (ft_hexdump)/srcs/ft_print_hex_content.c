#include "../includes/ft_lib.h"

void ft_print_hex_content(char *str, int c, unsigned int size)
{
	int i = 0;
	while(i < 16 || (i + c) < (int)size)
	{
		if (!(i%2))
			ft_putchar(' ');
		ft_print_byte_hex(*(str+i+c));
		i++;
	}
	ft_putchar(' ');
}
