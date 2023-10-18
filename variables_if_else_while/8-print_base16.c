#include <stdio.h>

/**
  * main - Prints base 16 naumbers and letters in lowercase
  *
  * Return: 0 (Success)
  *
  */
int main(void)
{
	int n;
	char c;

	for (n = 0; n < 10; n++)
	{
		char num = n + '0';

		putchar (num);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar (c);
	}
	putchar('\n');
	return (0);

}
