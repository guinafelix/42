int ft_str_is_alpha (char *str)
{
	int c = 0;
	char letter;
	if (str[c] == '\0')
		return 1;
	while (str[c] != '\0')
	{
		letter = str[c];
		if (letter < 65  || (letter > 90 && letter < 97) || letter > 122)
			return 0;
		c++;
	}
	return 1;
}
