#include <stdio.h>
#include <ctype.h>
/**
  * int_index - Function that searches for an integer
  * @array: array to search
  * @size: number of elements in array
  * @cmp: pointer to the function to be used to compare values
  * Return: index of the first element for which the cmp function
  * does not return 0
  */
int compare(int a)
{
	return (isalpha(a));
}
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL))
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
