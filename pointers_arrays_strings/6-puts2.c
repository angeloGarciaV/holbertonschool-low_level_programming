#include "main.h"
#include <stdio.h>
#include <string.h>
/**
  * puts2 - function that prints every other character in a string
  * @str: string
  */
void puts2(char *str)
{
	int i;
	int j = strlen(str);

	for (i = 0; i <= j; i++)
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}
	}
}
