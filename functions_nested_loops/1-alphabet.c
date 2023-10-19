#include <stdio.h>
#include "main.h"

/**
  * main - uses print_alphabet prototype to call the print_alphabet function
  *
  * Return: 0 (Success)
  */

void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

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
		putchar (c);
	}
	putchar ('\n');
}
