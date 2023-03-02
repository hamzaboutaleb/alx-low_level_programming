#include "main.h"
/**
  * _strcat - concatenates two string
  * @dest: first string
  * @src: second string
  * Return: pointer to dest string
  */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{}
	for (j = 0; src[j] != '\0'; j++, i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
