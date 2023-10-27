#include <stdio.h>
/**
  * print_array - Function that prints elements of an array of integers
  * @a:array to be printed
  * @n: number of items to print
  */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i <	n - 1)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
