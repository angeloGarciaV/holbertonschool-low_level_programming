#include <stdio.h>
#include <string.h>
/**
  *_strcpy - function that copies the string pointed to by src
  * @dest: the copied string
  * @src: string to be copied
  * Return: pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
