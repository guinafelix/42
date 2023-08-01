#include <stdlib.h>

int ft_strlen(char *str)
{
	int c = 0;
	while(*str++)
		c++;
	return c;
}

char *ft_strcat(char *dest, char *src)
{
	int dest_c = 0;
	int src_c = 0;
	while((src[src_c] != '\0'))
	{
		if (dest[dest_c] == '\0')
		{
			dest[dest_c] = src[src_c];
			src_c++;
		}
		dest_c++;
	}
	dest[dest_c] = '\0';
	return dest;
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	if (size <= 0 || strs == NULL)
		return (void *)malloc(sizeof(char));
	int total_length = 0;
	int c = 0;
	while(c < size)
		total_length += ft_strlen(strs[c++]);
	total_length += (size - 1) * ft_strlen(sep) + 1;
	char *dest = (char *)malloc(sizeof(char) * total_length);
	if (dest == NULL)
		return NULL;
	c = 0;
	while(c < size)
	{
		if (strs[c])
		{
			ft_strcat(dest, strs[c]);
			if (c < size - 1)
				ft_strcat(dest, sep);
		}
		c++;
	}
	return dest;
}
