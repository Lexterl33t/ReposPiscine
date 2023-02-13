#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a/b;
    *mod = a%b;
}

int main() 
{
    int div;
    int mod;
    int a;
    int b;

    a = 20;
    b = 30;

    ft_div_mod(a, b, &div, &mod);

    printf("%d / %d = %d\n", a, b, div);
    printf("%d mod %d = %d",a, b, mod);

}