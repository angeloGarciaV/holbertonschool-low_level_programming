#include "3-calc.h"
#include <stddef.h>
#include <string.h>
/**
  * get_op_func - function that selects the correct function to perform
  * @s: sign
  * Return: which operation to execute
  */

int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;
	while (ops[i].op != NULL)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			break;
		}
		i++;
	}
	return (ops[i].f);
}
