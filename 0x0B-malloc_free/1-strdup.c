#include <stdlib.h>
/**
  * _strdup - returns a pointer to new memory which contain copy of string
  * @str: string to copy to new memory
  * Return: pointer to new memory
  */
char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);

	char *p;
	int size_str, i;

	for (size_str = 0; str[size_str] != '\0'; size_str++)
	{
	};

	p = (char *) malloc(sizeof(char) * (size_str + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size_str; i++)
		p[i] = str[i];

	return (p);
}
