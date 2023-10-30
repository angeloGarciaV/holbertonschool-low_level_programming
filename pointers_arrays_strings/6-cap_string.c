#include <stdio.h>
/**
  * cap_string - Function that capitalizes all words of a string
  * @s: string to capitalize
  * Return: Capitalized string
  */
char *cap_string(char *s)
{
	int i, j;

	char spaces[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"',
			 '(', ')', '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; spaces[j] != '\0'; j++)
		{
			if (i == 0)
			{
				if (s[i] >= 'a' && s[i] <= 'z')
				{
					s[i] = s[i] - 32;
				}
			}
			if (s[i] == spaces[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] = s[i + 1] - 32;
				}
			}
		}
	}
	return (s);
}
