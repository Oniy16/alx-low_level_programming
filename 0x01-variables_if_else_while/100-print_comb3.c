#include <stdlib.h>
#include <stdio.h>

/**
 * main - the fun that print number by using putchar and comma
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);

		for (n = '1'; n >= '9'; n++)
		{
			putchar(n);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
