#include <stdio.h>
#include "main.h"
/**
  * print_alphabet - uses a for loop to print the alphabet in lowercase
  *
  * Return: void (Success)
  */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar ((int)c);
	}
	putchar ('\n');
}
