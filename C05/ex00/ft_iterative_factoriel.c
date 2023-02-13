#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int factoriel = 1;
    while (nb) {
        factoriel *= nb;
        nb--;
    }

    return (factoriel);
}

int main()
{

    printf("%d\n", ft_iterative_factorial(3));
}