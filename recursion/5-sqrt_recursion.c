#include <stdio.h>
/**
  * x_updt - updates x to calculate square root
  * @x: number to square and increment until it reaches n or error
  * @n: number to square
  * Return: natural square root of n
  */
int x_updt(int x, int n)
{
	if (x * x == n)
	{
		return (x);
	}
	if (x * x > n)
	{
		return (-1);
	}
	return (x_updt(x + 1, n));
}
/**
  * _sqrt_recursion - Function that returns the square root of a number.
  * @n: number to calculate the square root of
  * Return: natural square root of n or -1 if none exists
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (x_updt(1, n));
}
