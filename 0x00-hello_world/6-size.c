#include <stdio.h>

/**
 *main - print the size of various types
 *Return: Always o (Sucess)
 */
int main(void)
{
	int intType;
	float floatType;
	double dType;
	char charType;

	printf("Size of int: %zu byte(s)\n", sizeof(intType));
	printf("Size of float: %zu byte(s)\n", sizeof(floatType));
	printf("Size of double: %zu byte(s)\n", sizeof(dType));
	printf("Size of char: %zu byte(s\n", sizeof(charType));
	return (0);
}
