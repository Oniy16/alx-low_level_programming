#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/** 
 * main - for function main goes there 
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	printf("%d %s\n", n, "is positive");
	else if (n == 0)
	printf("%d %s\n", n, "is zero");
	else if (n < 0)
	printf("%d %s\n", n, "is negative");
	return (0);
}
