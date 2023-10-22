#include <stdio.h>
#include "main.h"
/**
  * print_numbers - uses a for loop to print  0-9
  *
  */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
}
