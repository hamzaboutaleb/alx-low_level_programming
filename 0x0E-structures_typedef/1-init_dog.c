#include "dog.h"
/**
  * init_dog - initiate dog struct
  * @d: pointer to dog struct
  * @name: name
  * @age: age
  * @owner: owner of dog
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
