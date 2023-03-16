#include <stdlib.h>

/**
  * _calloc -  allocates memory for an array with zeros
  * @nmemb: number of element
  * @size: size
  * Return: pointer to memory
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	void *p1;
	unsigned int i, j;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	p = (char *) malloc(size * nmemb);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		for (j = 0; j < size; j++)
			*(p + i + j) = 0;
	p1 = (void *) p;

	return (p1);
}
