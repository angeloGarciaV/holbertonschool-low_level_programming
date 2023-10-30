#include <stdio.h>
/**
  * _memset - function that fills memory with a constant byte
  * @s: pointer to a memory block
  * @b: byte to fill with
  * @n: number of spaces to fill
  * Return: updated pointer
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
