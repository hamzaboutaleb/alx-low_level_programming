#include <stdlib.h>

/**
  * _calloc -  allocates memory for an array with zeros
  * @nmemb: number of element
  * @size: size
  * Return: pointer to memory
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	p = (int *) malloc(size * nmemb);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		p[i] = 0;

	return (p);
}
