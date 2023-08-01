#include <stdlib.h>

int *ft_range(int min, int max)
{
	if (min >= max)
		return ((void *)0);	
	int *dest = malloc((max - min) * sizeof(int));
	int c = 0;
	while (min < max)
		dest[c++] = min++;
	return dest;
}
