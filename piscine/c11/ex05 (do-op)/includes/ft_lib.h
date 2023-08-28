#ifndef ft_lib
#define ft_lib

#include <unistd.h>

int	ft_sum(int a, int b);
int	ft_sub(int a, int b);
int	ft_mul(int a, int b);
int	ft_div(int a, int b);
int	ft_mod(int a, int b);
int	ft_get_op(char c);
int 	ft_check(char op, int b);
void	ft_putstr(char *str);
void	ft_putchar(char c);
void 	ft_putnbr(int nb);
void	ft_do_op(int argc, char **argv);
int 	ft_atoi (char *str);
int 	ft_calc(int n1, int n2, char operator);
	
#endif
