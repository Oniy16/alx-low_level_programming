#include <stdlib.h>
#include <stdio.h>

/**
 * main - main data
 * Return: Always 0 (success)
 */
int main(void)
{
        int x;

        for (x = 0; x <= 16; x++)
                putchar("%x",x);
        putchar('\n');
        return (0);
}
