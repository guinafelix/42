int ft_str_is_lowercase(char *str)
{
	if (str[0] == '\0')
		return 1;
	int c = 0;
	int letter;
	while (str[c] != '\0')
	{
		letter = str[c];
		if (letter < 'a' || letter > 'z')
			return 0;
		c++;
	}
	return 1;
}
