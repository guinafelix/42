#include "../includes/ft_lib.h"

void *ft_print_memory(void *addr, unsigned int size, int offset)
{
	int c = 0;
	while (c < (int)size)
	{
		ft_print_hex_addr(offset+c);
		ft_print_hex_content(addr, c, size);
		ft_print_content(addr, c, size);
		c += 16;
	}
	return addr;
}
