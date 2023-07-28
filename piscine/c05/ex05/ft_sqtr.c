int ft_sqrt(int nb)
{	
	int n = 1;
	if (nb > 0)
	{
		while ((n * n) <= nb)
		{
			if ((n * n) == nb)
				return n;
			n++;
		}
	}
	return 0;
}
