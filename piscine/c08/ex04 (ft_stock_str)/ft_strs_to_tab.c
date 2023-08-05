#include "ft_stock_str.h"
#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int c = 0;
	while(*str++)
		c++;
	return c;
}

char *ft_strcpy(char *dest, char *src)
{
	int c = 0;
	while (src[c])
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return dest;
}

char *ft_strdup(char *src)
{
	char *dest;
	dest = malloc((ft_strlen(src)+1) * sizeof(char));
	return ft_strcpy(dest, src);	
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int c = 0;
	t_stock_str *stock = (t_stock_str*) malloc(sizeof(t_stock_str) * (ac+1));
	if (stock == NULL)
		return NULL;
	stock[ac].str= 0;
	while(c < ac)
	{
		stock[c].size = ft_strlen(av[c]);
		stock[c].str = av[c];
		stock[c].copy = ft_strdup(av[c]);
		c++;
	}
	return stock;
}

int main()
{
	char *av[3] = {
		"teste",
		"teste",
		"teste"
	};
	t_stock_str *stock = ft_strs_to_tab(3, av);
	printf("%d", stock[0].size);
	free(stock);
}
