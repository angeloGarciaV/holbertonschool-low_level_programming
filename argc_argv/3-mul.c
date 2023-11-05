#include <stdio.h>
#include <stdlib.h>
/**
  * main - program that multiplies two numbers
  * @argc: count
  * @argv: numbers to multiply
  * Return: multiplication of arguments or 1 for Error
  */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);

	if (i == 0 || j == 0)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", i * j);
	return (0);
}
