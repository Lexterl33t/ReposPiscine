#include <stdio.h>
#include <string.h>

int ft_strcmp(char *str, char *str2)
{
    char c;
    char x;

    if (!str || !str2)
        return (0);

    /* It's checking if the string is empty, if it is, it returns the difference between the two
    strings. */
    c = *str++;
    x = *str2++;
    
    while (c == x) 
    {
        c = *str++;  
        x = *str2++;

        /* It's checking if the string is empty, if it is, it returns the difference between the two
        strings. */
        if (c == '\0') 
        {
            return (c-x);
        }

    } 

    return (c - x);
}


int main() 
{
    char *str = "d";
    char *str2 = "Bryton";
    printf("%d", ft_strcmp(str, str2));
    printf("%d", strcmp(str, str2));
}
