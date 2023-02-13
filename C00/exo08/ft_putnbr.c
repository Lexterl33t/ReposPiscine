#include <unistd.h>
#include <stdio.h>
#include <math.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
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

void ft_putnbr(int nb)
{
    long rev_number = reverse_nbr(nb);

    while (rev_number)
    {
        if (rev_number < 0) {
            ft_putchar('-');
            rev_number *= -1;
        }


        ft_putchar((rev_number % 10)+'0');
        rev_number /= 10;
    }
}


int main()
{
    int d = -2147483647;

    ft_putnbr(d);
}