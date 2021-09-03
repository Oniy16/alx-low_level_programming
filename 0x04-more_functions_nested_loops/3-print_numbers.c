#include "main.h"

/**
 * _isdigit - Check if a character is a digit
 * Return: 0 for a character that will be a digit or 0 for any else
 */
void print_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
		_putchar((x % 10) + '0');
	_putchar('\n');
	return (0);
}
