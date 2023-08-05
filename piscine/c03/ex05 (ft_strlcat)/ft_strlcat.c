int ft_strlen(char *str)
{
        int c = 0;
        while(str[c] != '\0')
                c++;
        return c;
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
        int dest_len = ft_strlen(dest);
        int i = 0;
        while (i < (size-dest_len) && src[i] != '\0')
        {
                dest[dest_len + i] = src[i];
                i++;
        }
        dest[dest_len + i] = '\0';
        return dest_len + i;
}
