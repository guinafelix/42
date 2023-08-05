int ft_recursive_power(int nb, int power)
{
	if (power == 0 && nb == 0)
		return 1;
	int value = nb;
	if (power > 1)	
		return nb * ft_recursive_power(value, --power);
	return nb;
}
