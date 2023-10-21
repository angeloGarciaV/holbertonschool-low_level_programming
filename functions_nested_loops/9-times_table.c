#include <stdio.h>
#include "main.h"
/**
  * times_table - uses for loop to multiply j * i.
  * i controls the y-axis and j controls the x-axis
  *
  */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int p = i * j;

			if (j >  0)
			{
				printf(", ");
			}
			if (j >= 1 && p == 0)
			{
				putchar(' ');
			}
			if (p > 0 && p < 10)
			{
				printf("%2d", p);
			} else
			{
				printf("%d", p);
			}
		}
		putchar('\n');
	}
}
