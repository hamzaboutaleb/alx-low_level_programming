#include <stdlib.h>

char **strtow(char *str)
{
	int number_word = 1, i, j, k, l, size = 0;
	int word_size;
	int start;
	char **p;

	if (str == NULL || *str == '\0')
		return (NULL);
	
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			word_size++;
	}

	p = (char **) malloc(word + 1);
	if (p == NULL)
		return (NULL);
	
	k = 0;

	for (i = 0; i < word - 1; i++)
	{
		size = 0;
		start = k;
		while (str[k] != ' ')
		{
			size++;
			k++;
		}
		p[i] = (char *) malloc(sizeof(char) * size + 1);
		if (p[i] == NULL)
		{
			for (l = 0; l < i; l++)
				free(p[l]);
			free(p);
			return (NULL);
		}
		for (l = 0; l < size; l++)
			p[i][l] = str[start + l];
	}

	return (p);
}
