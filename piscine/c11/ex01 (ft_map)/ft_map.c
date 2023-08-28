#include <stdlib.h>

int *ft_map(int *tab, int length, int(*f)(int))
{
	int c = 0;
	int *map = malloc(sizeof(int) * length);
	
	while (c < length)
	{
		map[c] = f(tab[c]);
		c++;
	}
	return map;
}
