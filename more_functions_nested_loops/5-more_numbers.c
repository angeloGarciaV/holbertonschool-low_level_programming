#include <stdio.h>
#include "main.h"
/**
  * more_numbers - prints the numbers 1-14, 10 times
  */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 11; i++)
	{
		for (j = 0; j < 15; j++)
		{
			printf("%d", j);
		}
		putchar('\n');
	}
}