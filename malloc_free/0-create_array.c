#include <stdlib.h>
#include <stdio.h>
/**
  * create_array - function that creates an array of chars, and initializes
  * it with a specific char
  * @size: size of array
  * @c: character
  * Return: pointer to array or NULL if 0 or it fails
  */
char *create_array(unsigned int size, char c)
{
	char *arr = (char *)malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
