char * ft_strupcase(char *str)
{
	int c = 0;
	char letter;
	while (str[c] != '\0')
	{	
		letter = str[c];
		if (letter >= 'a' && letter <= 'z')
			str[c] = letter - 32;
		c++;
	}
	return str;
}
