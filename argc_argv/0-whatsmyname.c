#include <stdio.h>
/**
  * main - Program that prints its name
  * Return: 0
  * @argc:count
  * @argv: array
  */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
