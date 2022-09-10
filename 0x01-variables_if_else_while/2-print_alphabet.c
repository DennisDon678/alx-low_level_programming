#include <stdio.h>

/**
 *main - Entry piont of the program
 *
 *Return: 0 on success
 */
int main(void)
{
  char n = 'a';
  char m = 'A';

  for ( ; n <= 'z'; n++)
    putchar(n);
  for ( ; m <= 'Z'; m++)
    putchar(m);
  putchar(10);
  return (0);
}
