int ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int c;

	c = 0;
	while (c < (length - 1))
	{
		if (f(tab[c + 1], tab[c]) < 0)
			return (0);
		c++;
	}
	return (1);
}
