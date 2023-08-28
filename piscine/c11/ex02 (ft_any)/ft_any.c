int ft_any(char **tab, int(*f)(char*))
{
	int c;

	c = 0;
	while (tab[c])
	{
		if (f(tab[c]) == 1)
			return (1);
		c++;
	}
	return (0);
}
