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

	for (i = k; i < j; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
