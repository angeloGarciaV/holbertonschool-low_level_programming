#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - Function that allocates memory using malloc
 * @b: amount of memory to allocate
 * Return: Pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);

	if (i == NULL)
	{
		exit(98);
	}
	return (i);
}
