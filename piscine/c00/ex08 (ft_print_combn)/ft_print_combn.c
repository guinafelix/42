#include <unistd.h>

void ft_put_char(char c)
{
	write(1, &c, 1);
}

void ft_put_commas(void)
{
	ft_put_char(',');
	ft_put_char(' ');
}

void ft_print_array(char* array,int size, int last)
{
	int i = 0;
	if (array[0] == last)
	{
		while(i < size)
			ft_put_char(array[i++]);
		write(1, ".\n", 2);
		return;
	}
	while (i < size)
		ft_put_char(array[i++]);
	ft_put_commas();
}

void ft_print_combn(int n)
{
	if (n > 10 || n <= 0)
	{
		return;
	}

	char value[10];
	char max_value[10];
	int flag, base;

	int i = 0;
 	while(i < n)
	{
		value[i] = i + 48;
		max_value[i] = (10 - n) + i + 48;
	       	i++;	
	}

	while(value[0] != max_value[0])
	{
		flag = n - 1;
		while(value[flag] == max_value[flag])
			--flag;
		base = ++(value[flag]);
		while(flag < n - 1)
			value[++flag] = ++base;
		ft_print_array(value, n, max_value[0]);
	}	
}
