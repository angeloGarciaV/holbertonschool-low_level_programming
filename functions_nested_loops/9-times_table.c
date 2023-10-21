#include <stdio.h>
#include "main.h"
/**
  * times_table - uses nested loops to multiply j * i
  *
  * Return: void
  */

void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf("%d", j * i);
			if (j < 9)
			{
				putchar (',');
				putchar (' ');
			}
		}
		putchar ('\n');
	}
}
