#include "main.h"
#include <stdio.h>

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
		printf("%d", a[n]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
