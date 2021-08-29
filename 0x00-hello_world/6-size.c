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

	printf("Size of char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of long int: %zu byte(s)\n", sizeof(long intType));
	printf("Size of long long int: %zu byte(s\n", sizeof(long long intType ));
	printf("Size of float: %zu byte(s\n", sizeof(floatType));
	return (0);
}
