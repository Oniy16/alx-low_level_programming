#include "stdio.h"

int main(void)
{
	int x = 0, y = 1, count, sum;

	for (count = 0; count < 50; count++)
	{
		sum = x + y;

		x = y;
		y = sum;
		printf( "%d", sum);
		if (count != 49)
			printf(", ");
		else
			printf("\n");
	}
}
