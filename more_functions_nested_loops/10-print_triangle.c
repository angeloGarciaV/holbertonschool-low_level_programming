#include <stdio.h>
#include "main.h"
/**
  * print_triangle - uses a for loop to print a triangle made of number signs
  * @size: determines the size of the triangle
  */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		putchar('\n');
		return;
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j < size - i - 1)
			{
			putchar(' ');
			}
			else
			{
				putchar('#');
			}
		}
		putchar('\n');
	}
}
