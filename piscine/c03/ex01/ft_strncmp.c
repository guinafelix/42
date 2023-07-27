int ft_strncmp(char *s1, char *s2, unsigned int size)
{
	int c = 0;
	while ((c < size - 1) && (s1[c] != '\0') && (s2[c] != '\0'))
		c++;
	return s1[c] - s2[c];
}
