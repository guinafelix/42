#include <unistd.h>

void ft_foreach(int *tab, int length, void (*f)(int))
{
	int c = 0;
	while (c < length) {
		f(tab[c++]);
	}	
}
