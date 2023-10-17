#include <stdio.h>

/**
  * main - this itterates through a-z and skips q and e with an if statement
  *
  * return (0)
  *
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'e' || 'q')
		{
			continue;
		}
		putchar (c);
	}
}
