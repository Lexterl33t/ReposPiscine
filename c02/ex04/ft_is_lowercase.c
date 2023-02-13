#include <stdio.h>

int ft_strlen(char *str) {
    char *tmp = str;

    while (*tmp)
        tmp++;

    return (str-tmp);
}

int ft_is_lowercase(char *str)
{
    if (ft_strlen(str) == 0)
        return (1);

    while (*str) {
        if (*str < 'a' || *str > 'z')
            return (0);
        str++;
    }

    return (1);

}

int main()
{
    char *str = "fzefzezef";

    printf("%d", ft_is_lowercase(str));
}