#include "main.h"
#include <stdio.h>
/**
  * rev_string -- reverse string
  * @s: string to reverse
  */

void rev_string(char *s)
{
	int i, j, size;
	char c;

	for (size = 0; s[size] != '\0'; size++)
	{
	}

	for (i = 0, j = size - 1; i < j; i++, j--)
	{
		c = s[j];
		s[j] = s[i];
		s[i] = c;
	}
}

