#include "main.h"
/**
 * print_alphabet_x10 - Check holberton
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: thing.
 */
void print_times_table(int n)
{
	int value, i, j, k;

	if (n < 0 || n > 15)
	{
		value = 1;
	}
	else
	{
		for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			k = i * j;

			if ((k / 10) == 0)
			{
				if (j != 0)
					_putchar(' ');
				_putchar(n + '0');
				if (j == n)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
				if (j == n)
					continue;
				_putchar(',');
				_putchar(' ');
		value = 0;
	}
		}
	}
	}
	return (value);
}
