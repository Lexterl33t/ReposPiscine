#include <stdio.h>

char *ft_strncat(char *dest, char *source, unsigned int n)
{
    char *tmp = dest;

    while (*tmp) 
    {
        tmp++;
    }

    while (n--)
    {
        *tmp++ = *source++;
    }

    *tmp = '\0';

    return dest;
}

int main()
{
    char str1[256] = "Hi ";
    char *str2 = "Bryton";

    printf("%p\n", ft_strncat(str1, str2, 3));

    printf("%s\n", str1);
}