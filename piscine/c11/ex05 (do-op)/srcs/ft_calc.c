#include "../includes/ft_lib.h"
#include <stdio.h>

int ft_get_op(char op)
{
	if (op == '+')
		return 0;
	else if (op == '-')
		return 1;
	else if (op == '*' )
		return 2;
	else if (op == '/')
		return 3;
	else if (op == '%')
		return 4;
	else
		return -1;
}

int ft_sum(int a, int b)
{
	return a + b;
}

int ft_sub(int a, int b)
{
        return a - b;
}

int ft_mult(int a, int b)
{
        return a * b;
}

int ft_div(int a, int b)
{
        return a / b;
}

int ft_mod(int a, int b)
{
	return a % b;
}

int ft_calc(int n1, int n2, char operator)
{
	int (*functions[5])(int, int);
	
	functions[0] = ft_sum;
	functions[1] = ft_sub;
	functions[2] = ft_mult;
	functions[3] = ft_div;
	functions[4] = ft_mod;
	
	int op = ft_get_op(operator);
	if (op == -1)
		return (0);
	return ((*functions[op])(n1, n2));
}
