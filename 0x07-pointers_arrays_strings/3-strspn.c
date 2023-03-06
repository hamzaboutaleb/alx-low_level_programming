#include "main.h"
/**
  * _strspn - return length a prefix substring
  * @s: pointer to string
  * @accept: pointer to substring
  * Return: length
  */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (i);
}
