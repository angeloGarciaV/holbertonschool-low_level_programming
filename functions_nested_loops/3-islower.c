#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
  * _islower - checks if a character is lowercase
  * @c: character that will be checked if it is lowercase
  *
  * Return: 0 (Success)
  */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	if (!islower(c))
	{
		return (0);
	}
}
