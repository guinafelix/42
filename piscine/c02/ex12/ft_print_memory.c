#include <unistd.h>

void ft_putchar (char c)
{
	write(1, &c, 1);
}

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

void ft_print_hex_addr(char *str)
{
	unsigned char *ptrByte;

	ptrByte = (unsigned char*)&str; 
	int c = 7;
	while (c-- >= 0)
	{
		ft_print_byte_hex(*(ptrByte+c));
	}
	ft_putchar(':');
	ft_putchar(' ');
}

void ft_print_hex_content(char *str, int c, unsigned int size)
{
	int i = 0;
	while(i < 16 || (i + c) < size)
	{
		if (!(i%2))
			ft_putchar(' ');
		ft_print_byte_hex(*(str+i+c));
		i++;
	}
	ft_putchar(' ');
}

void ft_print_content (char *str, int c, unsigned int size)
{
	int i = 0;
	char letter;
	while (i < 16 || (i + c) < size)
	{	
		letter = str[c+i];
		if (letter < 32 || letter > 126)
			ft_putchar('.');
		else 
			ft_putchar(letter);	
		i++;
	}
	ft_putchar('\n');
}

void *ft_print_memory(void *addr, unsigned int size)
{
	int c = 0;
	while (c < size)
	{
		ft_print_hex_addr(addr);
		ft_print_hex_content(addr, c, size);
		ft_print_content(addr, c, size);
		c += 16;
	}
	return addr;
}
