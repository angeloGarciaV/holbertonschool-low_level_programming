#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
  * print_strings - function that prints strings
  * @separator: string to be printed between the strings
  * @n:number of strings passed to the function
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *x;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, char*);
		if (i == n - 1)
		{
			printf("%s", x);
			continue;
		}
		if (separator == NULL)
		{
			printf("%s", x);
			continue;
		}
		if (x == NULL)
		{
			printf("(nil)");
			continue;
		}
		printf("%s%s", x, separator);
	}
	putchar('\n');

	va_end(args);
}
