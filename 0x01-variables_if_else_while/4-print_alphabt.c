#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -  goes there
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
	if (ch == 'q' || ch == 'e')
	{
		ch = ch + 1;
		continue;
	}
	putchar(ch);
	ch++;
	}
	putchar('\n');
	return (0);
}
