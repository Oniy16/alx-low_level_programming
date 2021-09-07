#include "main.h"

/**
 * _strlen - Check if a character is a digit
 * @s: gets the caracter
 */
int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
		length++;
	return (length);
}
