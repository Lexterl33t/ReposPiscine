#include <stdio.h>
#include <string.h>

int ft_strncmp(char *str, char *str2, unsigned int n)
{
    unsigned char c;
    unsigned char x;

   
    while (n-- != 0) {
        if (c == x) 
        {
            c = (unsigned char)*str++;  
            x = (unsigned char)*str2++;

            if (c == '\0') 
            {
                return (c-x);
            }
        } 
    }
    

    return (c - x);
}


int main() 
{
    char *str = "bryton3";
    char *str2 = "Bryton333";
    printf("%d", ft_strncmp(str, str2, 2));
    printf("%d", strncmp(str, str2, 2));
}