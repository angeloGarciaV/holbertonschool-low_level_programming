#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - basic calculator
 * @argc: number of arguments
 * @argv: array of pointers
 *
 * Return: 0 on success
 */
void main(int argc, char *argv[])
{
	int i, j, k;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	i = atoi(argv[1]);
	j = atoi(argv[3]);
	f = get_op_func(argv[2]);

	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	k = f(i, j);
	printf("%d\n", k);
}
