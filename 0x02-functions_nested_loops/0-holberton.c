#include "main.h"
/**
 * main - for function main goes their
 * Return: Always 0 (success)
 */
int main(void)
{
	char word[9] = "_putchar";
	int x;

	for (x = 0; x < 9; x++)
	{
		_putchar(word[x]);
	}
	_putchar('\n');
	return (0);
}
