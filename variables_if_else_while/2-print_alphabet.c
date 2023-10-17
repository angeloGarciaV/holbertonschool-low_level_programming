#include <stdio.h>
/**
 * main - Uses putchar to evaluate characters as their binary representations.
 * The following for loop iterates through characters a-z and prints them.
 * the second putchar adds a new line after the results of the for loop.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		putchar (c);
	}
	putchar ('\n');
	return (0);
}
