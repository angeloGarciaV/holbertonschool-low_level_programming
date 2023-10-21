#include <stdio.h>
#include "main.h"
/**
  * print_to_98 - it be a function
  * @n: number to print from
  */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i < 98)
			{
			printf("%d, ", i);
			}
			else
			{
				printf("%d", i);
			}
		}
	} else if (n > 98)
	{
		for (i = n; i >= 98; i--)
			if (i > 98)
			{
				printf("%d, ", i);
			}
			else
			{
				printf("%d", i);
			}
	}
	putchar('\n');
}
