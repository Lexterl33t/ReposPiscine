#include <stdio.h>

int ft_strlen(char *str) {
    char *tmp = str;

    while (*tmp)
        tmp++;

    return (str-tmp);
}

int ft_str_is_printable(char *str)
{
    if (ft_strlen(str) == 0) 
        return (1);

    while (*str) {
        if (*str < 32 || *str > 127)
            return (0);
        str++;
    }

    return (1);

}

int main()
{
    char *str = "jajajaj jajajajÇ";

    printf("%d", ft_str_is_printable(str));
}