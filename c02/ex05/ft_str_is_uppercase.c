#include <stdio.h>
#include <stddef.h>


int ft_str_is_uppercase(char *str)
{
    if (!str)
        return (1);
        
    if (str == 0)
        return (1);

    while (*str) {
        if (*str < 'A' || *str > 'Z')
            return (0);
        str++;
    }

    return (1);

}

int main()
{
    char *str = "AAAAAKKK";

    printf("%d", ft_str_is_uppercase(str));
}