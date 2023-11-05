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
	int i, j, k;

	j = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		k = atoi(argv[i]);

		if (k <= 0 || !isdigit(*argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		j += k;
	}
	printf("%d\n", j);
	return (0);
}
