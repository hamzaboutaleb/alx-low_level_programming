#include "main.h"
/**
 * set_bit - set bit to 1 at index
 * @n: number
 * @index: index of bit
 * Return: number
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int number_bits;
	unsigned long int mask = 1;

	number_bits = sizeof(unsigned long int) * 8;

	if (index > number_bits - 1)
		return (-1);

	mask <<= index;

	*n = (*n) | mask;

	return (1);
}
