#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
  * new_dog - alloavte memory for dog struct
  * @name: name
  * @age: age
  * @owner: owner of dog
  * Return: pointer to memory or NULL if its fails
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = (dog_t *) malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = (char *) malloc(strlen(name) * sizeof(char) + 1);
	strcpy(d->name, name);
	d->age = age;
	d->owner = (char *) malloc(strlen(owner) + sizeof(char) + 1);
	strcpy(d->owner, owner);
	return (d);
}
