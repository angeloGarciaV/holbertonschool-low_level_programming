#include <stdio.h>

/**
  * main - this itterates through a-z and skips q and e with an if statement
  *
  * Return: 0 (success)
  *
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'e' || c == 'q')
		{
			continue;
		}
		putchar (c);
	}
	return (0);
}
