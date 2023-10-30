#include <stdio.h>
/**
  * leet - Function that encodes a string into 1337
  * @s: string to encode
  * Return: encoded string
  */
char *leet(char *s)
{
	int i;
	char easy_to_remember_name[] = "aAeEoOtTlL44337711";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = easy_to_remember_name[s[i] - 'a'];
		}
		else if (s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] = easy_to_remember_name[s[i] - 'A'];
		}
	}
	return (s);
}
