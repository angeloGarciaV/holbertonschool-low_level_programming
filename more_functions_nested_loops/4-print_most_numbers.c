#include <stdio.h>
#include "main.h"
/**
  * print_most_numbers - for loop with an if statement that skips 2 and 4
  *
  */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		printf("%d", i);
	}
}
