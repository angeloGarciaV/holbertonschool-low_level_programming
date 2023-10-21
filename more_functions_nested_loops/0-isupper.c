#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
  * _isupper - if statement to check if the parameter is uppercase
  * @c: parameter to check
  * Return: 1 if uppercase, 0 otherwise
  */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}


}

