#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed in binary
*/

void print_binary(unsigned long int n)
{
	int i, j;
	unsigned long int mask = 1;

	for (i = 63; i >= 0; i--)
	{
		j = n >> i;

		if (j & mask)
		{
			putchar('1');
		}
		else if (i == 0 && !(j & mask))
		{
			putchar('0');
		}
		else
		{
			continue;
		}
	}
}
