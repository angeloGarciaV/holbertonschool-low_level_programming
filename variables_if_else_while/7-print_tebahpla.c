#include <stdio.h>

/**
  * main - uses a for loop to print the alphabet backward
  *
  * Return: 0 (Success)
  */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar (c);
	}
	return (0);
}
