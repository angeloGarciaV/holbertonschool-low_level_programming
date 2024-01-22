#include "search_algos.h"
#include <stdio.h>
#include <math.h>
/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 * Return: first index where value is located, or -1 if value is not present
*/
int exponential_search(int *array, size_t size, int value)
{
	size_t i, left, right, jump;

	if (array == NULL)
		return (-1);

	jump = 1;
	left = 0;
	right = jump;

	while (right < size && array[right] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", left, array[left]);
		left = right;
		right += jump;
	}

	printf("Value checked array[%ld] = [%d]\n", left, array[left]);
	printf("Value found between indexes [%ld] and [%ld]\n", left, right);

	if (right >= size)
		right = size - 1;

	for (i = left; i <= right; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}

	return (-1);
}
