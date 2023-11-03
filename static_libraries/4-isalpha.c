#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
  * _isalpha - Checks if the character is a letter in the alphabet
  * @c: character that will be checked if its in the alphabet
  *
  * Return: 0 (Success)
  */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	if (!isalpha(c))
	{
		return (0);
	}
	return (0);
}
