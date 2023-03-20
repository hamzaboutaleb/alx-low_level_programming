#include <stdio.h>
#include "dog.h"
/**
  * print_dog - print information about dog
  * @d: pointer to dog struct
  */
void print_dog(struct dog *d)
{
	char *name = "(nil)", *owner = "(nil)";
	float age;

	if (d == NULL)
		return;
	age = d->age;
	if (d->name != NULL)
		name = d->name;
	if (d->owner != NULL)
		owner = d->owner;

	printf("Name: %s\nAge: %f\nOwner: %s\n", name, age, owner);
}
