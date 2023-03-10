#include <stdlib.h>
/**
  * count_words - return number of words
  * @s: string
  * Return: number ofwrods
  */
int count_words(char *s)
{
	int words = 0, i = 0;

	while (s[i])
	{
		if (s[i] == ' ')
		{
			i++;
			continue;
		}
		else
		{
		words++;
			while (s[i])
			{
				if (s[i] == ' ')
				break;
				i++;
			}
		}

	}
	return (words);
}
/**
  * strtow - return array of words
  * @s: string to convert to array
  * Return: pointer to array
  */
char **strtow(char *s)
{
	int i = 0, words = 0, k = 0, l = 0, m = 0;
	char **p;
	int start = 0;
	int size = 0;

	words = count_words(s);
	if (words == 0 || s[0] == '\0')
		return (NULL);

	p = (char **) malloc(sizeof(char *) * (words + 1));

	while (s[i])
	{
		start = i;

		if (s[i] && s[i] == ' ')
		{
			i++;
			continue;
		}

		while (s[i])
		{
			if (s[i] == ' ')
				break;
			i++;
		}

		size = i - start;

		p[k++] = (char *) malloc((size + 1) * sizeof(char));

		for (l = 0; l < size; l++)
			p[m][l] = s[start + l];
		p[m++][l] = '\0';
	}
	return (p);
}

