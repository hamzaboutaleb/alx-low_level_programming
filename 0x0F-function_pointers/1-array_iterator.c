#include <stdlib.h>
/**
  * array_iterator - loop over an array and perfom action
  * @size: size of array
  * @action: action to perform
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;
	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
