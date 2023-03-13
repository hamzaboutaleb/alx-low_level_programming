#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;
	p = (char *) malloc(sizeof(char) * size + 1);

	if (p == NULL)
		return (NULL);
	
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	p[i] = '\0';

	return (p);
}
