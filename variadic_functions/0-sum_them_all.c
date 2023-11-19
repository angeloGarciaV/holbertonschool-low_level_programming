#include <stdio.h>
#include <stdarg.h>
/**
  * sum_them_all - Function that returns the sum of all parameter
  * @n: number of arguments
  * Return: sum of all numbers or 0 if no parameters
  */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int x, y;

	va_list args;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}
	y = 0;
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		y += x;
	}
	printf("%d\n", y);

	va_end(args);
	return (0);
}
