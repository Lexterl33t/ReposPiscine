#include <stddef.h>
#include <stdio.h>
char *ft_strcpy(char *dest, char *src)
{

    if (!dest && !src)
        return (NULL);

    if (!src)
        return (dest);

    char *s = dest;

    while (*src) {
        *dest++ = *src++;
    }

    *dest = '\0';

    return (s);
    
}

int main()
{
    char *src = "Hello world";

    char dest[34];

    ft_strcpy(dest, src);

    printf("%s", dest); 
}