#include "main.h"

/**
 * print_alphabet_x10 - Check holberton
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: thing.
 */
void print_times_table(int n)
{
	int x, y;

	if (n <= 15 && n >= 0  )
	{
		for (x = 0; x <= n; x++ )
		{
			for (y = 0; y <= n; y++ )
			{
				if( x * y < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar( x * y + '0');
					_putchar(',');
					_putchar(' ');
				}
				else if (x * y > 99)
				{
					_putchar( ((x * y) / 100) + '0');
					_putchar( (((x * y) / 10) % 10) + '0');
					_putchar( ((x * y) % 10) + '0');
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar(' ');
					_putchar( ((x * y) / 10) + '0');
					_putchar( ((x * y) % 10) + '0');
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
