#include "dog.h"
#include <stdlib.h>
/**
  * free_dog - Function that frees dogd
  * @d: dog struct pointer
  */
void free_dog(dog_t *d)
{
	free(d);
}
