#include <stdio.h>
/**
  * _strstr - Function that locates a substring
  * @haystack:string to search
  * @needle: substring to locate
  * Return: pointer to the beginning of the located substring
  * or NULL if the substring is not found
  */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		j = 0;
		while (needle[j] != '\0' && haystack[i + j] == needle[j])
		{
			j++;
		}

		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}
	return (NULL);
}
