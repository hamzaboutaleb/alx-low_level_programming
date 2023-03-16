#include <stdlib.h>

/**
  * _realloc -  reallocates a memory block
  * @ptr: old memory
  * @old_size: ptr size
  * @new_size: new size
  * Return: new memory
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	char *p1, *p2;
	int min, i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}

	if (old_size > new_size)
		min = new_size;
	else
		min = old_size;

	p = malloc(new_size);
	p1 = (char *) p;
	p2 = (char *) ptr;

	for (i = 0; i < min; i++)
		p1[i] = p2[i];

	free(ptr);

	return (p);
}
