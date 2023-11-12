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
	char *arr;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}

	for (j = 0; str[j] != '\0'; j++)
	{
	}

	arr = (char *)malloc(sizeof(char) * (j + 1));
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
