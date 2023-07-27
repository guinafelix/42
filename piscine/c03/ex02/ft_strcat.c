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
