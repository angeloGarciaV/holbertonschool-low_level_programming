#include <stdlib.h>
#include <string.h>
/**
  * _strdup - function that returns a pointer to a newly allocated space
  * in memory, which contains a copy of the string given as a parameter.
  * @str: string to duplicate
  * Return: pointer to the duplicated string, NULL if insufficient
  * memory was available or if str = NULL
  */
char *_strdup(char *str)
{
	char *arr = (char *)malloc(sizeof(char) * strlen(str) + 1);
	unsigned int i;

	if (arr == NULL)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < strlen(str); i++)
	{
		arr[i] = str[i];
	}

	return (arr);
}
