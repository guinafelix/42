#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int c;
	if (min <= max)
		return ((void *)0);
	if ((*range = (int *)malloc(sizeof(int) * (max - min))) == ((void *)0))
		return (-1);
	c = 0;
	while (min < max)
		*range[i++] = min++;
	return c;
}
