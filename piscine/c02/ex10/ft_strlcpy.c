unsigned int ft_strlcpy (char *dest, char *src, unsigned int size)
{
	unsigned int c = 0;
	size -= 1;
	while (src[c] && (c < size))
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return c;
}
