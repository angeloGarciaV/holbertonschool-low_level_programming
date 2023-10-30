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
	int i = 0, j;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (s + 1);
			j++;
		}
		i++;
	}
	return (NULL);
}
