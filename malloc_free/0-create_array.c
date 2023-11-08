#include <stdlib.h>
/**
  * create_array - function that creates an array of chars, and initializes
  * it with a specific char
  * @size: size of array
  * @c: character
  * Return: pointer to array or NULL if 0 or it fails
  */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}

	char *arr = (char *)malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (unsigned int i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
