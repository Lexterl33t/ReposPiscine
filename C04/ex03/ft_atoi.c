#include <stdio.h>
#include <stdlib.h>

int is_space(char c) {
    if (c == ' ')
        return (1);
    
    return (0);
}

int is_alpha(char c) 
{
    if ((c < 'a' || c > 'z') && (c < 'A' || c > 'Z'))
        return (0);
    return (1);
}

long reverse_nbr(int nb)
{
    long rev_nbr = 0;
    while (nb) {
        rev_nbr = rev_nbr * 10 + nb % 10;
        nb /= 10; 
    }

    return (rev_nbr);
}

int is_str_numeric(char c)
{
    if (c < '0' || c > '9')
        return (0);
    return (1);
}

int ft_atoi(char *str)
{
    int minus = 0;

    int number = 0;

    while (*str) 
    {
        while (is_space(*str))
            str++;

        

        while (*str == '+')
        {
            str++;
        }

        while (*str == '-')
        {
            minus++;
            str++;
        }

        if (is_alpha(*str))
        {
            break;
        }

        while (is_str_numeric(*str)) 
        {
            number = number * 10 + *str-'0';
            str++;
        }
        
        str++;

    }


    printf("%d\n", minus);
    if (minus) 
        return number*-1;

    return (number);
}

int main()
{
    int d = ft_atoi("  --++2147483647abc56");

    printf("%d\n", d);
}