#include <stdio.h>

int ft_strlen(char *str) {
    char *tmp = str;

    while (*tmp)
        tmp++;

    return (tmp-str);
}

int main()
{
    char *str = "Hello";
    printf("%d", ft_strlen(str));
}