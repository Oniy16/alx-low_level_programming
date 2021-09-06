#include "main.h"

/**
 * swap_int -  a function that swaps the values of two integers
 * @a: The 1st int to swap
 * @b: The 2nd int to swap
 */
void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
