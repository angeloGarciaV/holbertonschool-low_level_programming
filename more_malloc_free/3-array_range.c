#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers.
 * @min: lowest value of the array
 * @max: highest value of the array
 * Return: new array or NULL if it fails
 */

int *array_range(int min, int max)
{
	int *str;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	str = malloc(sizeof(int) * (max - min + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		str[i] = min;
		min++;
	}
	return (str);
}
