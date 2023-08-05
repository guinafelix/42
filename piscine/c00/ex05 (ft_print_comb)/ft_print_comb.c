#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_put_commas(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void ft_print_num(char* num)
{
	ft_putchar(num[0]);
	ft_putchar(num[1]);
	ft_putchar(num[2]);
}

void ft_print_comb(void)
{
	char num[3];
	num[0] = '0';
	while(num[0] <= '9')
	{
		num[1] = '0';
		while (num[1] <= '9')
		{
			num[2] = '0';
			while (num[2] <= '9')	
			{
				if (num[0] < num[1] && num[1] < num[2])
				{
					ft_print_num(num);
					ft_put_commas();
				}
				num[2]++;
			}
			num[1]++;
		}
		num[0]++;
	}
}
