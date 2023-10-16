#include <stdio.h>

/**
 * main - prints size of the memory alocated for certain data types
 *
 * Return: 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %lu byte\(s\)\n", puts(sizeof(char)));
	printf("Size of an int: %lu byte\(s\)\n", puts(sizeof(int)));
	printf("Size of a long int: %lu byte\(s\)\n", puts(sizeof(long int)));
	printf("Size of a float: %lu byte\(s\)\n", puts(sizeof(float)));
	return (0);
}
