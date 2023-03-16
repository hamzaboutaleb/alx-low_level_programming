#include <stdlib.h>

/**
  * _strlen - length of string
  * @s: string
  * Return: length
  */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{}

	return (i);
}

/**
  * string_nconcat - concatenates two strings
  * @s1: string
  * @s2: string
  * @n: number of byte form string 2 to concatnate with first string
  * Retunr: pointer to new memory
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1 = 0, len_s2 = 0, i, j = 0;
	char *p;

	if (s1 != NULL)
		len_s1 = _strlen(s1);
	if (s2 != NULL)
		len_s2 = _strlen(s2);
	if (n > len_s2)
		n = len_s2;

	p = (char *) malloc(sizeof(char) * (len_s1 + n + 1));

	if (p == NULL)
		return (NULL);
	
	for (i = 0; i < len_s1; i++)
		p[j++] = s1[i];
	for (i = 0; i < n; i++)
		p[j++] = s2[i];
	p[j] = '\0';

	return (p);
}
