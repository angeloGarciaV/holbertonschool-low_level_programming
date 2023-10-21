#include <stdio.h>
#include "main.h"
/**
  * times_tables - uses nested loops to multiply j * i
  *
  * Return: void
  */

void times_tables(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf("%d", j * i);
			if (j < 9)
			{
				_putchar (',');
				_putchar (' ');
			}
		}
		_putchar ('\n');
	}
}
