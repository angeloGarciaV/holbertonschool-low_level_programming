#include <stdlib.h>
#include "main.h"
/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: number of memory spaces
 * @size: size of nmemb
 * Return: pointer to allocated memory, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	str = malloc(nmemb * size);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (size * nmemb); i++)
	{
		str[i] = 0;
	}
	return (str);
}
