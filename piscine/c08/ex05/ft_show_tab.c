#include "ft_stock_str.h"
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(nb % 10 + '0');
}

void ft_putstr(char *str)
{
	while(*str)
	{
		write(1, &*str++, 1);
	}
	write(1, "\n", 2);
}

void ft_show_tab(struct s_stock_str *par)
{
	int c = 0;
	while(par[c].str)
	{
		ft_putstr(par[c].str);
		ft_putnbr(par[c].size);
		write(1, "\n", 2);
		ft_putstr(par[c].copy);	
		c++;
	}
}
