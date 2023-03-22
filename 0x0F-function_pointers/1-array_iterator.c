#include <stdlib.h>
#include "function_pointers.h"
/**
  * array_iterator - loop over an array and perfom action
  * @size: size of array
  * @action: action to perform
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
