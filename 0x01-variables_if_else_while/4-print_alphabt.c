#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	  {
	if(ch == 'q' || ch == 'e')
	  continue;
	putchar(ch);
          ch++;
	  }
	putchar('\n');
	return (0);
}
