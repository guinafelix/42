#include <stdlib.h>

{
	int c = 0;
	while(*str++)
		c++;
	return c;
}

char *ft_strcpy (char *dest, char *src)
{
	int c = 0;
	while (src[c])
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return dest;
}

char *ft_strdup(char *src)
{
	char *dest;
	dest = malloc((ft_strlen(src)+1) * sizeof(char));
	return ft_strcpy(dest, src);	
}
