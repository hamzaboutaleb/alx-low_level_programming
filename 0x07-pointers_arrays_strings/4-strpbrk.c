#include "main.h"
/**
  * _strpbrk - searches a string for any of a set of bytes
  * @s: pointer to string
  * @accept: pointer to accepted string
  * Return: pointer
  */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (accept[i] == s[i])
				return (s + i);
		}
	}
	return (0);
}
