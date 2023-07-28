int ft_iterative_factorial(int nb)
{	
	int count = nb - 1;
	while(count > 1)
	{
		nb *= count--;
	}
	return nb;
}
