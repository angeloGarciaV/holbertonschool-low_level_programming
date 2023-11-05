#include <stdio.h>
/**
  * main - Program that prints all arguments it receives
  * @argc: count
  * @argv: arguments for array
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
	{
		printf("%s\n", argv[0]);
	}
	for(i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
