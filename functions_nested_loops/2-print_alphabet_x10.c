#include <stdio.h>
#include "main.h"

/**
  * print_alphabet_x10 - Prints the alpahbet 10 times in lowercase
  *
  * Return: void (Success)
  */
void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i <= 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			putchar (c);
		}
		putchar ('\n');
	}
}
