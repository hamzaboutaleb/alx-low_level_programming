#include <stdlib.h>
/**
  * malloc_checked - allocates memory size of b
  * @b: size of memory
  * Return: pointer to memory
  */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = (void *)malloc(b);

	if (p == NULL)
	{
		return (98);
	}

	return (p);
}
