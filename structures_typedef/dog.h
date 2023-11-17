#ifndef _struct_
#define _struct_
#include <stdio.h>
#include <string.h>
/**
  * struct Dog - dog structure
  * @name: string for name
  * @age: float for age
  * @owner: string for name
  */
typedef struct Dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(dog_t *d, char *name, float age, char *owner);
void print_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
