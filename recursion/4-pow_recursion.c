#include <stdio.h>
/**
  * _pow_recursion - Function that returns the value of x by
  * the power of y.
  * @x: number to multiply
  * @y: exponent
  * Return: x to the power of y
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
		return (x *= _pow_recursion(x, y - 1));
}
