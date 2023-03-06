#include "main.h"
/**
  * _strstr -  locates a substring
  * @haystack: string
  * @needle: substring
  * Return: pointer
  */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (needle[j] != haystack[j + i])
				break;
		}
		if (needle[j] == '\0')
			return (haystack i + j)
	}
	return (0);
}
