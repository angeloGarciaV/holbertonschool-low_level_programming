#include <stdio.h>
/**
  * reverse_array - function to reverse a given array
  * @a: array to reverse
  * @n:	length of array
  */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j;

	n = n - 1;

	while (i <= n)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
		i++;
		n--;
	}
}
