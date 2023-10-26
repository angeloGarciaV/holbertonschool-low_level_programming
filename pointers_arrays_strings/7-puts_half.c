#include <stdio.h>
#include <string.h>
/**
  * puts_half - Function that prints half of a string.
  * @str: String to be halved
  */
void puts_half(char *str)
{
	int i;
	int j = strlen(str);
	int k = strlen(str) / 2;

	if (j % 2 != 0)
	{
		for (i = (j + 1) / 2; i < j; i++)
		{
			putchar(str[i]);
		}
	} else
	{
		for (i = k; i < j; i++)
		{
			putchar(str[i]);
		}
	}
	putchar('\n');
}
