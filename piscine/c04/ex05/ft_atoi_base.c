int ft_strlen(char *str) 
{ 
        int c = 0; 
        while(str[c]) 
                c++; 
        return c; 
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
                while(base[c+j])
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
