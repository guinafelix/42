int	ft_count_if(char **tab, int (*f)(char*))
{
	int count;
	int i;

	count = 0;
	i = 0;
	while (tab[i])
	{
		if (f(tab[i]) != 0)
			count++;
		i++;
	}
	return (count);
}
