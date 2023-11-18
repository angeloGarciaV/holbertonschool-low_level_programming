#include <stdio.h>
/**
  * print_name - function that prints name
  * @name: array for name
  * @f: function pointer
  */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
	{
		return;
	}
	f(name);
}
