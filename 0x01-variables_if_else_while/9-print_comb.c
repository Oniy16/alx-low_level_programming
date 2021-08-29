#include <stdlib.h>
#include <stdio.h>

/**
 * main - the fun that print number by using putchar and comma
 * Return: Always 0 (success)
 */
int main(void)
{
        int n;
	char cm = ',';

        for (n = 0; n <= 9; n++)
	{
		putchar(n % 10 + '0');
		putchar(cm);
	}
	putchar('\n');
	return (0);
}
