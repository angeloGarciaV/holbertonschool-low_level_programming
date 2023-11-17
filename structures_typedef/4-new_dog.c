#include "dog.h"
#include <string.h>
/**
  * new_dog - function that creates a new dog
  * @name: array for name
  * @age: float for age
  * @owner: array for owner
  * Return: new dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *arr;

	arr = malloc(sizeof(dog_t));
	if (arr == NULL)
		return (NULL);

	(*arr).name = malloc(sizeof(name) + 1);
	if (name == NULL)
	{
		free(arr);
		return (NULL);
	}

	(*arr).owner = malloc(sizeof(owner) + 1);
	if ((*arr).owner == NULL)
	{
		free((*arr).name);
		free(arr);
		return (NULL);
	}

	strcpy((*arr).name, name);
	strcpy((*arr).owner, owner);
	(*arr).age = age;

	return (arr);
}
