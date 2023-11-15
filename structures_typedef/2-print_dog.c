#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
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

	printf("%s\n", d->name);
	printf("%d\n", d->age);
	printf("%s\n", d->owner);

}
