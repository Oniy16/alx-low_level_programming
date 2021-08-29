#include <stdio.h>
/**
 *main - print the size of various types
 *Return: Always o (Sucess)
 */
int main(void)
{
	int intType;
	float floatType;
	long long int llType;
	char charType;
	long int lType;

	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(lType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(llType));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
	return (0);
}
