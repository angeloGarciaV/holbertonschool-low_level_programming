#include <stdio.h>
/**
 * main - Uses putchar to evaluate characters as their binary representations.
 * The following for loop iterates through characters a-z and prints them.
 * The second for loop does the same but with capital letters.
 * the third putchar adds a new line after the results of the for loops.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char c, h;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		putchar (c);
	}
	for (h = 'A' ; h <= 'Z' ; h++)
	{
		putchar (h);
	}
	putchar ('\n');
	return (0);
}
