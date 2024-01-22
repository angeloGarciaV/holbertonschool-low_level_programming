#include "search_algos.h"
#include <stdio.h>
/**
 * binary_search - searches for a value in a sorted array of integers using the
 * Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 * Return: first index where value is located, or -1 if value is not present
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right, mid;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		printf("Searching in array: ");

		for (i = left; i < right; i++)
			printf("%d, ", array[i]);

		printf("%d\n", array[i]);

		mid = (left + right) / 2;

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			left = mid + 1;

		else
			right = mid - 1;
	}

	return (-1);
}

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
	int result;
	size_t i, j, left, right;

	if (array == NULL)
	{
		return (-1);
	}
	if (array[0] == value)
	{
		printf("Value %d found at index 0\n", value);
		return (0);
	}

	i = 1;

	while (i < size && array[i] <= value)
	{
		printf("Value %d is not in range [%lu, %lu].Doubling the range.\n"
		, value, i / 2, i);

	    i *= 2;
	}

	left = i / 2;
	right = (i < size) ? i : size - 1;

	printf("Searching in range [%lu, %lu]: ", left, right);
	for (j = left; j <= right; j++)
	{
		printf("%d, ", array[j]);
	}
	printf("\n");

	result = binary_search(array + left, right - left + 1, value);

	if (result != -1)
	{
		return (left + result);
	}
	return (-1);
}
