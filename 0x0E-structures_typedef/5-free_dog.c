#include <stdlib.h>
#include "dog.h"
/**
  * free_dog - free allocate memory
  * @d: poinetr to memory
  */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->owner);
	free(d->name);
	free(d);
}

