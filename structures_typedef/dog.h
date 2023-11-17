#ifndef _struct_
#define _struct_
#include <stdio.h>
#include <string.h>
/**
  * struct dog_t - dog structure
  * @name: string for name
  * @age: float for age
  * @owner: string for name
  */
struct dog_t
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog_t *d, char *name, float age, char *owner);
void print_dog(struct dog_t *d);
#endif
