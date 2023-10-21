#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
  * _isdigit - if statement to check if the parameter is a digit
  * @c:parameter to check if it is a digit
  * Return: 1 if c is a digit 0 otherwise
  */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

