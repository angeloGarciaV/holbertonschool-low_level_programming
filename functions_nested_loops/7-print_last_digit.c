#include <stdio.h>
#include "main.h"
/**
  * print_last_digit - returns the last digit of n
  * @n: number the last digit will be taken from
  * Return: remainder of n / 10.
  *
  */
int print_last_digit(int n)
{
	int i = n % 10;

	printf("%d", i);

	return (0);
}
