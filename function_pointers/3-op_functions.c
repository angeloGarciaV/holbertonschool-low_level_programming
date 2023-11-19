#include "3-calc.h"
#include <stdio.h>

/**
  * op_add - function that adds a and b
  * @a: first int
  * @b: second int
  * Return: sum of a and b
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - function that returns the difference between a and b
  * @a: first int
  * @b: second int
  * Return: difference between a and b
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - function that multiplies a and b
  * @a: first int
  * @b: second int
  * Return: product of a and b
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - function that divides a by  b
  * @a: first int
  * @b: second int
  * Return: result of a divided by b
  */
int op_div(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		return(100);
	}
	return (a / b);
}

/**
  * op_mod - function that returns the remainder of the division of a by b
  * @a: first int
  * @b: second int
  * Return: remainder of the division of a by b
  */
int op_mod(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		return(100);
	}
	return (a % b);
}
