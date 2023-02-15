#include <stdio.h>
#include <stddef.h>

char *ft_strlowcase(char *str)
{
    int i;
    i = 0;
    
    if (!str)
        return (NULL);
        
    while (str[i]) {
        if (str[i] >= 'A' && str[i] <= 'Z') 
            str[i] = str[i] +32;

        i++;
    }

    return (str);

}

int main()
{
    char str[] = "Hello world";

    printf("%s", ft_strlowcase(str));
}