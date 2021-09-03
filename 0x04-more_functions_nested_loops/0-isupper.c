#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	char c[];

	for (x = 0; x < sizeof(c); x++)
	printf("%c: %d\n", c, _isupper(c[x]));
	return (0);
}
