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
	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	if (d->age < 0)
	{
		printf("Age: (nil)");
	}
	if (d->owner == NULL)
	{
		printf("Owner: (nil)")
	}

	printf("Name: %s\n", d->name);
	printf("Age: %.1f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
