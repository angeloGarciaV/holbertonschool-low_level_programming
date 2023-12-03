#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to number to be modified
 * @index: index of the bit to be cleared
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	mask <<= index;
	mask = ~mask;
	*n = *n & mask;
	return (1);
}
