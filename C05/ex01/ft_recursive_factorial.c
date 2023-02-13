#include <stdio.h>

int ft_iterative_factorial(int nb, int factorial)
{
    if (nb)
        return (factorial);

    return factorial*= ft_iterative_factorial(nb--, factorial);
}

int main()
{

    printf("%d\n", ft_recursive_factorial(3));
}