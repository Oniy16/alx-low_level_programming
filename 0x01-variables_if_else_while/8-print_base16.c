#include <stdlib.h>
#include <stdio.h>

/**
 * main - main data
 * Return: Always 0 (success)
 */
int main(void)
{
	int x;
	char ch;

	for (x = 0; x <= 9; x++)
		putchar(x % 10 + '0');
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
