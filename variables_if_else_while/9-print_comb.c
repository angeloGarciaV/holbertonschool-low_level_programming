#include <stdio.h>

/**
 * main - Uses a for loop to iterate through base 16 digits and converts them
 * to ASCII so they be printed with putchar().
 * the if statements place the comas and spaces.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar (n + '0');

		if (n < 9)
		{
			putchar (',');
			putchar (' ');
		}
	}
		putchar ('\n');
		return (0);
}
