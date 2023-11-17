#ifndef _struct_
#define _struct_
#include <stdio.h>
#include <string.h>
/**
  * struct dog - dog structure
  * @name: string for name
  * @age: float for age
  * @owner: string for name
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
