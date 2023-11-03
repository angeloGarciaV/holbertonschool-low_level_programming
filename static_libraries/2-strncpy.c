#include <stdio.h>
/**
  * _strncpy - Function that copies a string.
  * @dest:copied string
  * @src: string to copy
  * @n: how much of src to copy by index
  * Return: copied string
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (i != n)
	{
		dest[j] = src[i];
		if (src[i] == '\0')
		{
			dest[j] = '\0';
			break;
		}
		j++;
		i++;
	}
	while (j != n)
	{
		dest[j++] = '\0';
	}
	return (dest);
}
