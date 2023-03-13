#include <stdlib.h>
/**
  * create_array - create array and fill it with c
  * @size: size of array
  * @c: character to fill array with it
  * Return: pointer to array memory
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size <= 0)
		return (NULL);

	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}

	return (p);
}
