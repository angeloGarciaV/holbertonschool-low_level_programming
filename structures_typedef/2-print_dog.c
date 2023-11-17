#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * print_dog - Function that prints a struct dog
 * @d: Struct to print
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	printf("Name: ");
	if ((*d).name == NULL)
	{
		printf("(nil)\n");
	} else
	{
		printf("%s\n", (*d).name);
	}

	printf("Age: ");
	if (isnan((*d).age) || (*d).age < 0)
	{
		printf("(nil)\n");
	} else
	{
		printf("%f\n", (*d).age);
	}

	printf("Owner: ");
	if ((*d).owner == NULL)
	{
		printf("(nil)\n");
	} else
	{
		printf("%s\n", (*d).owner);
	}
}
