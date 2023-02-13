#include <stdio.h>

void ft_swap(int *a, int *b)
{
    *a^=*b;
    *b^=*a;
    *a^=*b;
}

int main() 
{
    int a,b;
    a = 10;
    b = 20;
    
    printf("a => %d  b :> %d\n", a, b);

    ft_swap(&a, &b);

    printf("a => %d b => %d", a, b);

}