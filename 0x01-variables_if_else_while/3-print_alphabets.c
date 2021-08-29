#include <stdlib.h>
#include <stdio.h>

/**
 * main - main data
 * Description: This is a function that print alpabet in lower case
 * using putchar
 */
int main(void)
{
  char ch;

  for (ch = 'a'; ch <= 'z'; ch++)
    putchar(ch);
  for (ch = 'A'; ch <= 'Z'; ch++)
    putchar(ch);
  putchar('\n');
  return (0);
}
