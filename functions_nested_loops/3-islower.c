#include <ctype.h>
#include <stdbool.h>
#include "main.h"

/**
  * _islower - checks if a character is lowercase
  * @c: character that will be checked if it is lowercase
  *
  * Return: 0 (Success)
  */
int _islower(int c)
{
	if (islower(c) == true)
	{
		return (1);
	} else if (islower(c) != true)
	{
		return (0);
	}
}
