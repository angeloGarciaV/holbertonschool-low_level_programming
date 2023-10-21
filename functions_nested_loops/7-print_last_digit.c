#include <stdio.h>
#include "main.h"
#include <limits.h>
/**
  * print_last_digit - checks if n is positive or negative
  * then return the last digit. If n is INT_MIN, i is automatically set to 8.
  * @n: number the last digit will be taken from
  * Return: remainder of n / 10.
  *
  */
int print_last_digit(int n)
{
	int i;

	if (n < 0 && n != INT_MIN)
	{
		n *= -1;
		i = n % 10;
	} else if (n == INT_MIN)
	{
		i = 8;
	}
	else
	{
		i = n % 10;
	}

	_putchar (i + '0');

	return (i);
}
