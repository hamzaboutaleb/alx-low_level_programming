#include "main.h"
/**
  * _strcmp - compare twi string
  * @s1: first string
  * @s2: second string
  * Return: if s1 > s2 return 1 else -1 return 0
  */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
	}
	return (0);
}
