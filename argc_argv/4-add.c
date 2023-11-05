#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
  * main - Program that adds positive numbers.
  * @argc: count
  * @argv: Numbers to add
  * Return: Result, 0 if no numbers, and 1 for error
  */
int main(int argc, char *argv[])
{
	int i, j, x, z = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		x = atoi(argv[i]);
		z += x;
	}
	printf("%d\n", z);
	return (0);
}
