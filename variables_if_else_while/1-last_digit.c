#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Uses srand() and time() to generate a random number.
 * The 'l' declaration extracts the last digit by using modulus 10.
 * The if statement checks if l is greater than
 * 5, 0, or less than 6 but more than 0.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	l = n % 10;

	if (l > 5)
	{
		printf("Last digit of %d is %d and is grater than 5", n, l);
	} else if (l == 0)
	{
		printf("Last digit of %d is %d and is zero", n, l);
	} else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, l);
	}
	return (0);
}
