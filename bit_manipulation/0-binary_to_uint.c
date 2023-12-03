#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* binary_to_uint - converts a binary number to an unsigned int
* @b: pointer to a string of 0 and 1 chars
* Return: converted number or 0 if b is NULL or contains chars not 0 or 1
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (*b)
	{
		if (*b == '0' || *b == '1')
		{
			result = (result << 1) + (*b - '0');
			b++;
		}
		else
		{
			return (0);
		}
	}
	return (result);
}
