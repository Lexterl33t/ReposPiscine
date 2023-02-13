#include <stdio.h>

void ft_swap(int *a, int *b) 
{
    *a^=*b;
    *b^=*a;
    *a^=*b;
}

void ft_rev_int_tab(int *tab, int size)
{
    int i;
    i = 0;
    
    while(i < size) {
        ft_swap((tab+i), (tab+size));
        size--;
        i++;
    }
}

int main()
{   
    int tab[] = {1, 2, 3};

    for(int i = 0; i < 3; i++)
        printf("%d\n", *(tab +i));

    ft_rev_int_tab(tab, 3-1);

    for(int i = 0; i < 3; i++)
        printf("%d\n", *(tab +i));
}