#include <stdio.h>
/**
  * _strchr - Function that locates a character in a string
  * @s: string to check
  * @c:character to look for
  * Return: first occurence of character c
  */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}
