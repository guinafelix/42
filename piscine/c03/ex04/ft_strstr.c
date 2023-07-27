char *ft_strstr(char *str, char *to_find)
{
	int c = 0;
	int k;
	
	if (to_find[0] == '\0')
		return str;
	while (str[c])
	{
		k = 0;
		while (str[c+k] == to_find[k])
		{
			if (to_find[k+1] == '\0')
				return (str+c);
			k++;
		}
		c++;
	}
	return ((void *)0);
}


