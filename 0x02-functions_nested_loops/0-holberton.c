#include "main.h"
/**
 * main - for function main goes their
 * Return: Always 0 (success)
 */
int main(void)
{
	char word[8] = "_putchar";
	int x;

	for (x = 0; x < 8; x++)
	{
		_putchar(word[x]);
	}
	_putchar('\n');
	return (0);
}
