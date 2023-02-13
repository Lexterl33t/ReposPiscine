#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
    if (power < 0)
        return (0);

    int i = 0;

    int res = 1;

    while (i < power) {
        res*=nb;
        i++;
    }

    return (res);
}

int main()
{
    printf("%d", ft_iterative_power(2, -1));
}