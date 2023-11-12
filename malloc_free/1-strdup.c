#include <string.h>
#include <stdio.h>
#include <stdlib.h>
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
	unsigned int j = strlen(str);

	if (str == NULL)
	{
		return (NULL);
	}
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= j; i++)
	{
		arr[i] = str[i];
	}

	return (arr);
}
