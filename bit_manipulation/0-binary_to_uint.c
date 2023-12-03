#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: converted number or 0 if b is NULL or contains chars not 0 or 1
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, j, len, sum = 0;

	if (b == NULL)
		return (0);

	len = strlen(b);

	for (i = 0, j = len - 1; i < len; i++, j--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
			sum += pow(2, j);
	}

	return (sum);
}
