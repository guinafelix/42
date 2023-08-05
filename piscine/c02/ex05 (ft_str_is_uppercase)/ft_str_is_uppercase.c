int ft_str_is_uppercase(char *str)
{
	if (str[0] == '\0')
		return 1;
	int c = 0;
	int letter;
	while (str[c] != '\0')
	{
		letter = str[c];
		if (letter < 'A' || letter > 'Z')
			return 0;
		c++;
	}
	return 1;
}
