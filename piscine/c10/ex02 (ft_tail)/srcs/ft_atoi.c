int ft_atoi (char *str)
{	
	int c = 0;
	int result = 0;
	int sign = 1;
	while (str[c])
	{
		if (str[c] == '-' || str[c] == '+')
		{
			if (str[c] == '-')
				sign = sign * -1;
		}
		else if (str[c] >= 48 && str[c] <= 57)
			result = (result * 10) + (int)str[c] - 48;
		else
			break;
		c++;
	}
	return (sign * result);
}
