#include "main.h"
/**
  * swap_int - Function that swaps the values of two integers.
  * @a: parameter to swap with b.
  * @b: parameter to swap with a.
  */
void swap_int(int *a, int *b)
{
	*b = a;
	*a = b;
}
