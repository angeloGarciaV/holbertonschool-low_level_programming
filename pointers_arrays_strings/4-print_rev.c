#include "main.h"
#include <stdio.h>
#include <string.h>
/**
  * print_rev -function that prints a string in reverse.
  * @str:String to print.
  */
void print_rev(char *str)
{
	int i;
	int ing = strlen(str);

	for (i = ing - 1; i >= 0; i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
