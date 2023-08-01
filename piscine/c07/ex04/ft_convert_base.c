#include <stdlib.h>

int ft_strlen(char *str)
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

	int k = 0;
	int j;
	while (base[k])
	{
		if (base[k] == '+' || base[k] == '-')
			return 0;
		j = k + 1;
		while(base[j])
		{
			if (base[k] == base[k+j])
				return 0;
			j++;	
		}
		k++;
	}
	if (k <= 1)
		return 0;
	return 1;
}

char *ft_putnbr_base(int nbr, char *base)
{
	if (!ft_check_base_input(base))
		return ((void *)0);
	int q_base = ft_strlen(base);
	int nbr_base_size = ft_nbr_base_size(nbr, q_base);
	char *value = malloc(sizeof(char) * (nbr_base_size + 1));
	int c = nbr_base_size;
	value[nbr_base_size] = '\0';
	if (nbr < 0)
	{
		nbr = -nbr;
		value[0] = '-';
	}
	while (nbr)
	{
		value[c-1] = base[nbr % q_base];
	       	nbr /= q_base;
		c--;
	}
	return value;
}

int ft_find_value(char to_find, char* base)
{
	int  c = 0;
	while (base[c] != to_find)
		c++;
	return c;
}

int ft_pow(int base, int exp)
{
	int c = exp;
	int value = base;
	if (exp == 0)
		return 1;
	while (c-- > 1)
		value *= base;
	return value;
}

int ft_atoi_base(char *str, char *base)
{
	if (!ft_check_base_input(base))
		return 0;
        int c = 0;
	int q_base = ft_strlen(base);
        int result = 0;
	int position = ft_strlen(str);
        int sign = 1;
        while (str[c])
        {
		if (str[c] == '-')
			sign = sign * -1;
		if  (str[c] != '+' && str[c] != '-') 
          		result += ft_find_value(str[c], base) * ft_pow(q_base, (position - c - 1));
	  	c++;
        }
        return (sign * result);
}

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int dec = ft_atoi_base(nbr, base_from);
	char *converted = ft_putnbr_base(dec, base_to);
	return converted;
}
