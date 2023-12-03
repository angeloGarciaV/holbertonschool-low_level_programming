#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed in binary
*/
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int flag = 0;

	mask <<= (sizeof(unsigned long int) * 8 - 1);
	if (n == 0)
	{
		printf("0");
		return;
	}
	while (mask)
	{
		if ((n & mask) == 0 && flag == 1)
		{
			printf("0");
		}
		else if ((n & mask) != 0)
		{
			printf("1");
			flag = 1;
		}
		mask >>= 1;
	}
}