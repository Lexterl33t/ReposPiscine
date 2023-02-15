#include <stdio.h>
#include <stddef.h>


int ft_is_lowercase(char *str)
{
    if (!str)
        return (NULL);
    if (str == 0)
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