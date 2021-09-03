#include "main.h"

/**
 * print_number - Check if a character is a digit
 */
void print_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
		_putchar((x % 10) + '0');
	_putchar('\n');
}
