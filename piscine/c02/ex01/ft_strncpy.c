char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	int c = 0;
	while (c < n)
	{
		if (src[c] == '\0')
		{
			while (c < n)
			{
				dest[c] = '\0';
				c++;
			}
			break;
		}
		dest[c] = src[c];
		c++;
	}
	return dest;
}
