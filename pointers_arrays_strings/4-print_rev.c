#include <stdio.h>
#include <string.h>
/**
  * print_rev -function that prints a string in reverse.
  * @s:String to print.
  */
void print_rev(char *s)
{
	int i;
	int ing = strlen(s);

	for (i = ing - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
