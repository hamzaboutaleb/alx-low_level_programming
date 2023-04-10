#include "main.h"
/**
 * clear_bit- set bit to 0 at index
 * @n: number
 * @index: index of bit
 * Return: 1 or 0
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int number_bits;
	unsigned long int mask = 1;

	number_bits = sizeof(unsigned long int) * 8;

	if (index > number_bits)
		return (-1);

	mask = ~(1 << index);

	*n = (*n) & mask;

	return (1);
}
