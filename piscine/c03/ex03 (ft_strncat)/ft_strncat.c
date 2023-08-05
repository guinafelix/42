int ft_strlen(char *str)
{
	int c = 0;
	while(str[c] != '\0')
		c++;
	return c;	
}

char *ft_strncat(char *dest, const char *src, unsigned int nb)  
{
	int dest_len = ft_strlen(dest);
        int i = 0;
	while (i < nb && src[i] != '\0')
	{
     		dest[dest_len + i] = src[i];
		i++;
	}
       	dest[dest_len + i] = '\0';
        return dest;
}
