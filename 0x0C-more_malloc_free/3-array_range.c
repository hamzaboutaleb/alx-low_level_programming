#include <stdlib.h>
/**
  * array_range - creates an array of integers from min to max
  * @min: min value
  * @max: max value
  * Return: pointer to memory
  */
int *array_range(int min, int max)
{
	int num_elem, i, j = 0;
	int *p;

	if (min > max)
		return (NULL);

	num_elem = max - min + 1;
	p = (int *) malloc(num_elem * sizeof(int));

	if (p == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		p[j++] = i;

	return (p);
}
