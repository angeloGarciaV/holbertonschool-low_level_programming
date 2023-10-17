#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - determines if 'n' is positive or negative
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf(n "is positive");
	} else if (n < 0)
	{
		printf(n "is negative");
	} else
	{
		printf(n "is zero");
	}
	return (0);

}
