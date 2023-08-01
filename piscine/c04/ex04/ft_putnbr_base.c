#include <unistd.h>
int ft_strlen(char *str)++=
{
	int c = 0;
	while(str[c])
		c++;
	return c;
}

int ft_nbr_base_size(int nbr, int size)
{	 
	int count;
	while ((nbr /= size) >= size)
		count++;
	return count;
}

int ft_check_base_input(char *base)
{
	int c = 0;
	int j;
	while (base[c])
	{
		if (base[c] == '+' || base[c] == '-')
			return 0;
		j = c + 1;
		while(base[j])
		{
			if(base[c] == base[c+j])
				return 0;
			j++;	
		}
		c++;
	}
	if (c <= 1)
		return 0;
	return 1;
}

void ft_putnbr_base(int nbr, char *base)
{
	if (!ft_check_base_input(base))
		return;
	int q_base = ft_strlen(base);
	int nbr_base_size = ft_nbr_base_size(nbr, q_base);
	char value[nbr_base_size];
	int c = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
		write(1, "-", 1);
	}
	while (nbr)
	{
		value[c] = nbr % q_base;
	       	nbr /= q_base;
		c++;	
	}
	while (c > 0)
		write(1, &base[value[--c]], 1);
}
