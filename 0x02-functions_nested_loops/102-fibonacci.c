#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long x = 0, y = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = x + y;

		x = y;
		y = sum;
		printf( "%lu", sum);
		if (count != 49)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
