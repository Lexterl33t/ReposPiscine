#include <stddef.h>
#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    if (!dest && !src)
      return (NULL);

    if (!src) return (dest);

    char *s = dest;
    unsigned int i;

    i = 0;

    while (i < n && *src) {
        *dest++ = *src++;
        i++;
    }

    while (i < n) {
        *dest++ = '\0';
        i++;
    }

    return (s);
}

int main()
{
    char *src = "Hello, world";

    char dest[30];

    ft_strncpy(dest, src, 5);

    printf("%s\n", dest);
}