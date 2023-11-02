#include <stdio.h>
/**
  * x_updt - function that updates x to use in is_prime
  * @n: number to check if prime
  * @x: divisor
  * Return: n for is_prime
  */
int x_updt(int x, int n)
{
	if (n <= 1)
	{
	return (0);
	}
	if (x == 1)
	{
		return (1);
	}
	if (n % x == 0)
	{
		return (0);
	}
	return (x_updt(x - 1, n));
}
/**
  * is_prime_number - function that checks if a nubmer is prime
  * @n: number to check if prime
  * Return: 1 if prime 0 if not
  */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (x_updt(n - 1, n));
}
