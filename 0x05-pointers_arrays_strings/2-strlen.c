#include "main.h"

/**
 * _strlen - Check if a character is a digit
 * @s: gets the caracter
 * Return:  int value
 */
int _strlen(char *s)
{
	int  length = 0;

	while (*s++)
		length++;
	return (length);
}
