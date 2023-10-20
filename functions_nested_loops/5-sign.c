#include <stdio.h>
#include "main.h"

/**
  * print_sign - checks if a number is positive or negative and prints
  * the appropriate sign.
  * @n: number to be checked
  * Return: 0 (Success)
  */

int print_sign(int n)
{
	if (n > 0)
	{
		putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar (0);
		return (0);
	}
	if (n < 0)
	{
		putchar ('-');
		return (-1);
	}
}
