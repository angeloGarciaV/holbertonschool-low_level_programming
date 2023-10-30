#include <stdio.h>
/**
  * leet - Function that encodes a string into 1337
  * @s: string to encode
  * Return: encoded string
  */
char *leet(char *s)
{
	char *leet(char *s)
{
	int i, j;

	char lowers[] = "aeotl";
	char uppers[] = "AEOTL";
	char nums[] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; lowers[j] !=  '\0' && uppers[j] != '\0'; j++)
		{
			if (s[i] == lowers[j] || s[i] == uppers[j])
			{
				s[i] = nums[j];
			}
		}
	}
	return (s);
}
