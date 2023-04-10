#include "main.h"

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int number_bits;
	unsigned long int mask;

	number_bits = sizeof(unsigned long int) * 8;

	if (index >= number_bits)
		return (-1);

	mask = 1 << index;

	*n = (*n) | mask;

	return (*n);
}
