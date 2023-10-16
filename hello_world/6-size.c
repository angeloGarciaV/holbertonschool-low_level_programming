#include <stdio.h>

/**
 * main - prints size of the memory alocated for certain data types
 *
 * Return: 0 (Success)
 */
int main(void)
{
	printf("%lu\n", sizeof(char));
	printf("%lu\n", sizeof(int));
	printf("%lu\n", sizeof(long int));
	printf("%lu", sizeof(float));
	return (0);
}
