#include <stdio.h>
/**
  * leet - Function that encodes a string into 1337
  * @s: string to encode
  * Return: encoded string
  */
char *leet(char *s)
{
	int i, j;
	char easy_to_remember_name[] = "aAeEoOtTlL44337711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == easy_to_remember_name[j])
			{
				s[i] = easy_to_remember_name[j + 10];
				break;
			}
		}
	}
	return (s);
}
