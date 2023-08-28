#include "../includes/ft_lib.h"

int ft_check(char op, int b)
{
	if (op == '/' && b == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	else if (op == '%' && b == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	return (1);
}


void ft_do_op(int argc, char **argv)
{
	if ((ft_check(argv[2][0], ft_atoi(argv[3]))) && (argc == 4))
	{
		ft_putnbr(ft_calc(ft_atoi(argv[1]), ft_atoi(argv[3]) , argv[2][0]));
		ft_putchar('\n');
	}
}
