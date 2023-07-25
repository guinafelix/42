#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_nbr(int nb)
{
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	if (nb >= 10)
	{
		ft_nbr(nb / 10);
	}
	ft_putchar(nb % 10 + '0');
}

int main()
{
	ft_nbr(690);	
}