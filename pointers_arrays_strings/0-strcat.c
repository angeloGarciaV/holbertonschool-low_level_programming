#include <stdio.h>
/**
  * _strcat - function that concatinates two strings
  * @dest: destination for added string
  * @src: string to add
  * Return: combined string
  */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	j = 0;

	while (src[j] != '\0')
	{
		dest[i] = sec[j];
		j++;
		i++;
	}
	i++;
	dest[i] = '\0';
	return (dest);
}
