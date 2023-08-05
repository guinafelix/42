int ft_is_prime (int nb)
{
	if (nb == 0 || nb == 1)
		return 0;
	int c = 2;
	while (c < nb)
	{
		if ((nb % c) == 0)
			return 0;
		c++;
	}
	return 1;
}
