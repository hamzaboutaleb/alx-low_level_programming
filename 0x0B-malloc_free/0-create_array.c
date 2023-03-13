#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size <= 0)
		return (NULL);

	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
		return (NULL);
	
	for (i = 0; i < size - 1; i++)
	{
		p[i] = c;
	}
	p[i] = '\0';

	return (p);
}
