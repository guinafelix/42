#include <stdio.h>
char *ft_strlowcase(char *str)
{
	int c = 0;
	char letter;
	while (str[c] != '\0')
	{	
		letter = str[c];
		if (letter >= 'A' && letter <= 'Z')
			str[c] = letter + 32;
		c++;
	}
	return str;
}
