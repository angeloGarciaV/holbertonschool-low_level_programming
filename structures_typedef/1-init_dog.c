#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
  * init_dog - function that initialize a variable of type struct dog
  * @d: pointer to dog struct
  * @name: array for name
  * @age: int for age
  * @owner: array for name
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = strdup(name);
		d->age = age;
		d->owner = strdup(owner);
	}
}
