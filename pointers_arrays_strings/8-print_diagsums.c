#include <stdio.h>
/**
  * print_diagsums - function that prints the sum of the two diagonals
  * of a square matrix of integers.
  * @a: matrix
  * @size: size of matrix
  */
void print_diagsums(int *a, int size)
{
	int i, x, y;

	x = 0;
	y = 0;
	for (i = 0; i < size; i++)
	{
		x += a[i * size + i];
		y += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", x, y);
}
