#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c) { write(1, &c, 1); }

void ft_print_comb(void) {
  
  int x;
  int y;
  int z;

  x = 0;
  y = 0;
  z = 0;


  while(x <= 7) {
    y = x+1;

    while(y <= 8) {
      z = y+1;
      while(z <= 9) {
        if(x != z && y != z && x != y) {
          ft_putchar(x+'0');
          ft_putchar(y+'0');
          ft_putchar(z+'0');

          if((x != 7) && (y != 8) && (z != 9)) {
            ft_putchar(',');
          }
        }
        z++;
      }
      y++;
    }
    x++;
  } 
}

int main() { ft_print_comb(); }
