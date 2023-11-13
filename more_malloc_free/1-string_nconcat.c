#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - Function that concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: size of s2
 * Return: returns pointer to string, or NULL if s1/s2 empty or malloc fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n > strlen(s2))
		n = strlen(s2);
	arr = malloc(strlen(s1) + n + 1);
	if (arr == NULL)
		return (NULL);
	for (i = 0, j = 0; s1[i] != '\0'; i++, j++)
		arr[j] = s1[i];
	for (i = 0; i != n; i++, j++)
		arr[j] = s2[i];
	arr[j] = '\0';
	return (arr);
}
