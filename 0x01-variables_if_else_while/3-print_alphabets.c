#include <stdlib.h>
#include <stdio.h>

/**
 * main - main data
 * Description: This is a function that print alpabet in lower case
 * using putchar
 */
int main(void)
{
  char ch = 'a';
  char cH = 'A';

  for (ch, ch <= 'z',ch++)
    putchar(ch);
  for (cH, cH <= 'z',cH++)
    putchar(ch);
  putchar('\n');
  return (0);
}
