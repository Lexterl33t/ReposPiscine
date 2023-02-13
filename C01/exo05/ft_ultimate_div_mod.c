#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
    int t;
    t = *a;

    *a = *a / *b;
    *b = t % *b;
    
}

int main()
{
    int a = 23;
    int b = 34;

    printf("a => %d b => %d\n", a, b);
    ft_ultimate_div_mod(&a, &b);
    printf("a => %d b => %d\n", a, b);

}