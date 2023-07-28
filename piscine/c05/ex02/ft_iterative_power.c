int ft_iterative_power(int nb, int power)
{
	if (power == 0 && nb == 0)
		return 1;
	if (power < 0)
		return 0;
	int count = power;
	int value = nb;
	while (count-- > 1)
		value *= nb;
	return value;
}
