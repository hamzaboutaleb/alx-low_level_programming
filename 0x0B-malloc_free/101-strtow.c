#include <stdlib.h>

int count_words(char *s)
{
	int result = 0, i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == ' ')
			result++;
	}

	return result;
}

char **strtow(char *str)
{
	int words, k, i, l, size;
	char **p;

	if (str == NULL || *str == '\0')
		return (NULL);
	
	words = count_words(str);

	p = (char **) malloc(words + 1);
	if (p == NULL)
		return (NULL);	

	k = 0;
	for (i = 0; i < words; i++)
	{
		size = 0;
		start = k;
		while (str[k] != ' ')
		{
			size++;
			k++;
		}
		k++;

		p[i] = (char *) malloc(sizeof(char) * size + 2);
		if (p[i] == NULL)
		{
			for (l = 0; l < i; l++)
				free(p[l]);
			free(p);
			return (NULL);
		}
		for (l = 0; l < size; l++)
			p[i][l] = str[start + l];
		p[i][l++] = '\n';
		p[i][l] = '\0';
	}
	p[i] = NULL;

	return (p);
}
