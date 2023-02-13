#include <stdio.h>


char *ft_strstr(char *s1, char *s2)
{
    while (*s1) 
    {
        
        char *tmp = s1;
        while (*s2 && *tmp == *s2) {
            s2++;
            tmp++;
        }

        if (*s2 == '\0')
            return (s1);
        
        s1++;
    }

    return (NULL);
}

int main()
{
    char *str = "Hello Bryton tu es le plus beau";

    char *str2 = ft_strstr(str, "Bryton");

    if (str2 != NULL) {
        printf("%s", str2);
    }
}