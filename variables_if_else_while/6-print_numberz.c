#include <stdio.h>
/**
  * main - uses ASCII numbers to print 0-9 with putchar()
  *
  * Return: 0 (success)
  */
int main(void)
{
	int c = 48;

	while (c < 58)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
