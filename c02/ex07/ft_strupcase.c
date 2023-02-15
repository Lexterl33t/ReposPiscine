#include <stdio.h>
#include <stddef.h>


char *ft_strupcase(char *str)
{
    int i;
    i = 0;

    if (!str)
        return (NULL);
    
    while (str[i]) {
        if (str[i] >= 'a' && str[i] <= 'z') 
            str[i] = str[i] -32;

        i++;
    }

    return (str);

}

int main()
{
    char str[] = "Hello world";

    printf("%s", ft_strupcase(str));
}