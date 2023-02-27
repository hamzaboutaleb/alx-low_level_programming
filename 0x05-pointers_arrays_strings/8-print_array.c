#include "main.h"
#include <stdio>

/**
  * print_array - print element of array
  * @a: array
  * @n: array size
  */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d");
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
