#include <stdio.h>
#include <string.h>

int ft_strncmp(char *str, char *str2, unsigned int n)
{
    char c;
    char x;

    c = *str++;
    x = *str2++;

    while (n-- != 0) {
        if (c == x) 
        {
            c = *str++;  
            x = *str2++;

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
    char *str = "Bryton333";
    char *str2 = "Bryton333";
    printf("%d", ft_strncmp(str, str2, 2));
    printf("%d", strncmp(str, str2, 2));

}
