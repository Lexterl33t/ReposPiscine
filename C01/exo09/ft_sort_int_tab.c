#include <stdio.h>

void ft_swap(int *a, int *b) 
{
    *a^=*b;
    *b^=*a;
    *a^=*b;
}


void ft_sort_int_tab(int *tab, int size)
{
    int i;
    i = 1;

    while(i < size) {
        if( *(tab - (i-1)) > *(tab + i)) {
            ft_swap((tab+(i-1)), (tab+i));
        }
        i+=2;
    }   
}

int main()
{
    int tab[] = {1, 2, 4, 3};
    
    for (int i = 0; i < 4; i++)
        printf("%d\n", *(tab+i));

    ft_sort_int_tab(tab, 4);

    for (int i = 0; i < 4; i++)
        printf("%d\n", *(tab+i));
}