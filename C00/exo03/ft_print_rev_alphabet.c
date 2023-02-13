#include <unistd.h>

void ft_putchar(char c) { write(1, &c, 1); }

void ft_print_rev_alphabet(void) {
  char letter;

  letter = 'Z';

  while (letter >= 'A') {
    ft_putchar(letter);
    letter--;
  }
}

int main() { ft_print_rev_alphabet(); }
