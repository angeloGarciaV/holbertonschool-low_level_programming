#include <stdio.h>
#include <stdlib.h>
/**
  * str_concat - function that concatenates two strings.
  * @s1: string 1
  * @s2: string 2
  * Return: new array with concatenated string or NULL if failure
  */
char *str_concat(char *s1, char *s2)
{
	char *arr;
	int i, j, k;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++)
	{}
	for (j = 0; s2[j] != '\0'; j++)
	{}

	k = i + j;

	arr = (char *)malloc(sizeof(char) * (k + 1));

	if (arr == 0)
	{
		return (NULL);
	}
	for (i = 0; i < k - j; i++)
	{
		arr[i] = s1[i];
	}
	for (j = 0; j < k; j++)
	{
		arr[i] = s2[j];
		i++;
	}
	arr[i + 1] = '\0';
	return (arr);
}
