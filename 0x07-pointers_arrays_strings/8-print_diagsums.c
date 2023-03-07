#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - sum of the two diagonals of a square matrix of integers
 * @a: pointer to array
 * @size: size of array
 */

void print_diagsums(int *a, int size)
{
	unsigned int n1, n2;
	int i;

	for (i = 0; i < size; i++)
	{
		n1 += a[(i * size) + i];
		n2 += a[size * i + size - (i + 1)];
	}
	printf("%d, %d\n", n1, n2);
}

