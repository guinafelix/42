#include "../includes/ft_lib.h"

void ft_print_content (char *str, int c, unsigned int size)
{
	int i = 0;
	char letter;
	ft_putchar('|');	
	while (i < 16 || (i + c) < (int)size)
	{	
		letter = str[c+i];
		if (letter < 32 || letter > 126)
			ft_putchar('.');
		else 
			ft_putchar(letter);	
		i++;
	}
	ft_putchar('|');
	ft_putchar('\n');
}
