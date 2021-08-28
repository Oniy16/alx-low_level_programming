#include <stdlib.h>
#include <stdio.h>

/**
 * main - main data
 * Description: This is a function that print alpabet in lower case using putchar 
 */
int main(void)
{
  char ch = 'a';

  while (ch <= 'z')
    {
      putchar(ch);
      ch++;
    }
  putchar('\n');
  return (0);
}
