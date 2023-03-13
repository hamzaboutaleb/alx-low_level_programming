#include <stdlib.h>
/**
  * str_concat - return new memory which conatins s1 follewd with s2
  * @s1: first string
  * @s2: second string
  * Return: new memory
  */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int i, size_s1 = 0, size_s2 = 0;

	for (i = 0; s1[i] != '\0'; i++)
		size_s1++;
	for (i = 0; s2[i] != '\0'; i++)
		size_s2++;

	p = (char *) malloc(sizeof(char) * (size_s1 + size_s2 + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size_s1 - 1; i++)
		p[i] = s1[i];
	for (i = size_s1 - 1; i - size_s1 - 1 < size_s2; i++)
		p[i] = s2[i - size_s1 - 1];
	p[i] = '\0';
	return (p);
}
