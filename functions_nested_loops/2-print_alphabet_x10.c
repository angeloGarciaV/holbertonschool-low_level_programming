#include <stdio.h>
#include "main.h"

/**
  * print_alphabetx10 - Prints the alpahbet 10 times in lowercase
  *
  * Return: void (Success)
  */
void print_alphabetx10(void)
{
	int i;
	char c;

	for (i = 0; i <= 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			putchar (c);
		}
		putchar ('\n');
	}
	putchar ('n');
}
