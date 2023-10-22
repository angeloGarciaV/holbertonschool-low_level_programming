#include <stdio.h>
#include "main.h"

/**
  * print_square - uses nested for loops to print a square
  * @size: dimensions of the square
  */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
