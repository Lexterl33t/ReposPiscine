#include <stdio.h>

void ft_ft(int *nbr) {
    *nbr = 42;
}

int main() {
    int d = 10;
    printf("%d\n", d);
    ft_ft(&d);
    printf("%d\n", d);

}