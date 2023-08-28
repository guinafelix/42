void ft_swap(char **a, char **b)
{
	char *p;
	p = *a;
	*a = *b;
	*b = p;
}

int ft_strcmp (char *s1,  char *s2)
{
	while((*s1 == *s2) && (*s1 != '\0') && (*s2 ))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int ft_size(char **tab)
{
	int c = 0;
	while(*tab++)
		c++;
	return c;
}

void ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *))
{
	int c;
	int k;
	int size;
	
	c = 0;
	size = ft_size(tab);
	while(c < size - 1)
	{
		k =  0;
		while (k < size - c - 1)
		{
			if (cmp(tab[k], tab[k+1]) > 0)
				ft_swap(&tab[k], &tab[k+1]);
			k++;
		}
		c++;
	}
}
