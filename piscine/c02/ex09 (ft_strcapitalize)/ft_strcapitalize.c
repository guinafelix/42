char *ft_strcapitalize(char* str)
{
	int c = 0;
	char letter;
	while (str[c] != '\0')
	{
		letter = str[c];
		if (c == 0 && (letter  >= 'a' && letter <= 'z'))
			str[c] = letter - 32;
		else if (c != 0 && (str[c] != ' ') && (!(str[c-1] >= 'a' && str[c-1] <= 'z') && !(str[c-1] >= 'A' && str[c-1] <= 'Z')) && (letter  >= 'a' & letter <= 'z') && !(str[c-1] >= 48 && str[c-1] <= 57))
			str[c] = letter - 32;
		c++;
	}
	return str;
}
