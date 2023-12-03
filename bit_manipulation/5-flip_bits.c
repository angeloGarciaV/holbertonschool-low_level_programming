#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * flip_bits - returns the number of bits you would need to flip to get from
 * one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits you would need to flip to get from one number to
 * another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask = 1;
	unsigned int count = 0;

	mask <<= (sizeof(unsigned long int) * 8 - 1);
	while (mask)
	{
		if ((n & mask) != (m & mask))
		{
			count++;
		}
		mask >>= 1;
	}
	return (count);
}
