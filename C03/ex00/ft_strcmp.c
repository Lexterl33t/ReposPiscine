#include <stdio.h>

int ft_strcmp(char *str, char *str2)
{
    char c;
    char x;

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
    char *str = "Bryton333";
    char *str2 = "Bryton333";
    printf("%d", ft_strcmp(str, str2));
}
