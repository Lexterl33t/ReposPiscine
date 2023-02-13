char *ft_strcpy(char *dest, char *src, unsigned int n)
{

    while (*src) {
        *dest++ = *src++;
    }

    *dest = '\0';

    return (dest);
    
}