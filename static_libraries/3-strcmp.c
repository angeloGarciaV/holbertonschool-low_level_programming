#include <stdio.h>
/**
  * _strcmp - Function that compares strings
  * @s1: string to compare
  * @s2: string to compare
  * Return: 0 if they're the same, positive int if s1 is greater,
  * and negative if s2 is greater.
  */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{}
	for (i = 0; s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
