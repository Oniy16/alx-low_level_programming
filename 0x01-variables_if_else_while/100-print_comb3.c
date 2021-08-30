#include <stdlib.h>
#include <stdio.h>

/**
 * main - the fun that print number by using putchar and comma
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int x;

	for (n = '0'; n <= '9'; n++)
	{
		for (x = '1'; x <= '9'; x++)
		{
			putchar(n);
			putchar(x);
			if (n != '8' && x != '9')
		{
			putchar(',');
			putchar(' ');
		}
		}
	}
	return (0);
}
