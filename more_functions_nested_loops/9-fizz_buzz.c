#include <stdio.h>
/**
  * main - uses a for loop to count from 1 -100.
  * The if statement checks whether a number is divisible by 3 or 5 and prints
  * 'Fizz' or 'Buzz' respectively. If the number is divisible by both,
  * it prints 'FizBuzz'.
  *
  * Return: 0 (Success)
  */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		} else if (i % 3 == 0)
		{
			printf("Fizz");
		} else if (i % 5 == 0)
		{
			printf("Buzz");
		} else
		{
			printf("%d", i);
		}
		if (i < 100)
		{
			printf(" ");
		}
	}
	putchar('\n');
	return (0);
}
