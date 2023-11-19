#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
  * print_all - function that prints anything
  * @format: list of types of arguments
  */
void print_all(const char * const format, ...)
{
	va_list args;
	char *x;
	int i;

	va_start(args, format);
	i = 0;
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i] != '\0')
	{
		switch (format[i])
		{case 'c':
			printf("%c", (char) va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", (float) va_arg(args, double));
			break;
		case 's':
			x = va_arg(args, char*);
			if (x != NULL)
			{
				printf("%s", x);
				break;
			}
			printf("(nil)");
			break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f'
		|| format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
}
