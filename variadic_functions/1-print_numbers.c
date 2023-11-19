#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
  * print_numbers - function that prints numbers
  * @separator: the string to be printed between numbers
  * @n:number of integers passed to the function
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;

	va_start(args, n);

	unsigned int i;
	int x;

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		if (i == n - 1)
		{
			printf("%d", x);
			break;
		}
		printf("%d%s ", x, separator);
	}
	putchar('\n');

	va_end(args);
}
