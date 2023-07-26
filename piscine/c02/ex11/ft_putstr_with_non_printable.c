#include <unistd.h>

void ft_putchar (char c)
{
	write(1, &c, 1);
}

void ft_putstr_non_printable (char *str)
{
	int c = 0;
	char letter;
	char hex_base[] = "0123456789abcdef"; 
	while (str[c] != '\0')
	{	
		letter = str[c];
		if (letter < 32 || letter > 126)
		{
			if (letter < 16)
			{
				ft_putchar('\\');
				ft_putchar('0');
				ft_putchar(hex_base[(int)str[c]]);
			}
			else
			{
				ft_putchar('\\');
				ft_putchar(hex_base[(int)str[c] / 16]);
				ft_putchar(hex_base[(int)str[c] % 16 + 16]);
			}

		}
		else 
			ft_putchar(str[c]);	
		c++;
	}

}
