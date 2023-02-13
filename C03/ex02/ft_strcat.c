#include <stdio.h>

char *ft_strcat(char *dest, char *source)
{
    char *tmp = dest;

    while (*tmp) 
    {
        tmp++;
    }

    while (*source)
    {
        *tmp++ = *source++;
    }

    *tmp = '\0';

    return dest;
}

int main()
{
    char str1[256] = "Hello ";
    char *str2 = "Bryton";

    printf("%p\n", ft_strcat(str1, str2));

    printf("%s\n", str1);
}