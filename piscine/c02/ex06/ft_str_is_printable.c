int ft_str_is_printable(char *str)
{
	if (str[0] == '\0')
		return 1;
	int c = 0;
	char letter;
	while (str[c] != '\0')
	{
		letter = str[c];
		if (letter < 32 || letter > 126)
			return 0;
		c++;
	}
	return 1;
}
