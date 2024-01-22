#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 * Return: first index where value is located, or -1 if value is not present
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		i = left + (((double)(right - left) / (array[right] - array[left])) *
				(value - array[left]));

		if (i > size - 1)
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}

		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);

		if (array[i] < value)
			left = i + 1;

		else
			right = i - 1;
	}

	return (-1);
}
