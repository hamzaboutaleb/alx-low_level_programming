#include <stdlib.h>

/**
  * _calloc -  allocates memory for an array with zeros
  * @nmemb: number of element
  * @size: size
  * Return: pointer to memory
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p1;
	void *p;
	unsigned int i, j;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = (void *) malloc(size * nmemb);
	if (p == NULL)
		return (NULL);

	p1 = (char *) p;
	for (i = 0; i < nmemb * size; i++)
			*(p1 + i) = 0;

	return (p);
}
