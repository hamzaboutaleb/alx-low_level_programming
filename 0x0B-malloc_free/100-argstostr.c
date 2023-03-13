#include <stdlib.h>
/**
  * argstostr - concatenate all arg
  * @ac: number of args
  * @av: pointer to args
  * Return: pointer to string
  */
char *argstostr(int ac, char **av)
{
	char *p;
	int size, i, j, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			size++;
		size++;
	}
	p = (char *) malloc(sizeof(char) * size);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			p[k++] = av[i][j];
		p[k++] = '\n';
	}
	return (p);
}
