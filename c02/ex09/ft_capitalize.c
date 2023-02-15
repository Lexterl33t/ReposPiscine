#include <stdio.h>
#include <stddef.h>



int ft_char_is_alpha(char c)
{
    if ((c < 'a' || c > 'z') && (c < 'A' || c > 'Z'))
            return (0);

    return (1);

}

int ft_char_is_numeric(char c)
{
    if (c < '0' || c > '9')
        return (0);

    return (1);

}

char to_uppercase(char c) {
    if ((c < 'A' || c > 'Z') && !ft_char_is_numeric(c))
        return c-32;
    else
        return c;
}


char *ft_strcapitalize(char *str)
{
    int i;
    i = 0;
    
    if (!str)
        return (NULL);
        
    while (str[i]) {
        if (i == 0) {
            str[i] = to_uppercase(str[i]);
        }

        if (!ft_char_is_alpha(str[i]) && !ft_char_is_numeric(str[i]) && str[i+1] != '\0') {
            while (!ft_char_is_alpha(str[i]) && !ft_char_is_numeric(str[i]))
                i++;
            
            str[i] = to_uppercase(str[i]);  
        }
            
        i++;
    }

    return (str);

}

int main()
{
    char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

    printf("%s", ft_strcapitalize(str));
}