char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i;

    i = 0;

    while (i < n && *src) {
        *dest++ = *src++;
        i++;
    }

    while (i < n) {
        *dest++ = '\0';
        i++;
    }

    return (dest);
}