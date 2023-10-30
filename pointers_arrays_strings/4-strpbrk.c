#include <stdio.h>
/**
  * _strpbrk - Function that searches a string for a set of bytes
  * @s: String to check
  * @accept: bytes to check
  * Return: pointer to the byte in s that matches accept or NULL
  * if there are no matches
  */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
