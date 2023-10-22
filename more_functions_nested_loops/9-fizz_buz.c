#include <stdio.h>
/**
  * main -
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
			printf("FizzBuzz ");
			continue;
		} else if (i % 3 == 0)
		{
			printf("Fizz ");
			continue;
		} else if (i % 5 == 0)
		{
			printf("Buzz ");
			continue;
		}

		printf("%d ", i);
	}
	putchar('\n');
}
