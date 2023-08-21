#include "../includes/ft_lib.h"

void ft_print_byte_hex(unsigned char byte)
{
	if ((byte / 16) < 10)
		ft_putchar((48 + (byte / 16)));
	else
		ft_putchar((87 + (byte / 16)));
	if ((byte % 16) < 10)
		ft_putchar((48 + (byte % 16)));
	else
		ft_putchar((87 + (byte % 16)));
}
