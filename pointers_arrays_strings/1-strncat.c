#include <stdio.h>
/**
  * _strncat - Function that concatinates two strings
  * @dest: Destination for src
  * @src: string to add to destination
  * @n: how many characters of src are copied
  * Return: concatinated string
  */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
