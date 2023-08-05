#include <stdlib.h>

int ft_is_sep(char to_find, char *charset)
{
	int c = 0;
	while(charset[c])
	{
		if (charset[c] == to_find)
			return 1;
		c++;
	}
	if (to_find == '\0')
		return 1;
	return 0;
}

int ft_count_words(char *str, char *charset)
{
	int c = 0;
	int words_count = 0;
	while(str[c])
	{
		if (ft_is_sep(str[c], charset) == 0  && ft_is_sep(str[c+1], charset) == 1)
			words_count++;
		c++;	
	}
	return words_count;
}

void ft_write(char *split, char *src, char *charset)
{
	int c = 0;
	while (ft_is_sep(src[c], charset) == 0)
	{
		split[c] = src[c];
		c++;
	}
	split[c] = '\0';
}

void ft_get_words(char **split, char *str, char *charset)
{
	int c = 0;
	int word =  0;
	int k;
	while(str[c])
	{
		if (ft_is_sep(str[c], charset) == 1)
			c++;
		else
		{
			k = 0;
			while(ft_is_sep(str[c+k], charset) == 0)
				k++;
			split[word] = malloc(sizeof(char) * (k+1));
			ft_write(split[word], str + c, charset); 
			word++;
			c += k;		
		}
	}
}

char **ft_split(char *str, char *charset)
{
	int words_count = ft_count_words(str, charset);
	char **split = malloc(sizeof(char*) * (words_count + 1));
	split[words_count] = 0;
	ft_get_words(split, str, charset);
	return split;
}
