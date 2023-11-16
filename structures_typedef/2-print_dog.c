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
		exit(0);
	}
	if (d->name == NULL || d->age == NAN || d->owner == NULL)
	{
		printf("nil");
	}

	printf("%s\n", d->name);
	printf("%.1f\n", d->age);
	printf("%s\n", d->owner);
}
