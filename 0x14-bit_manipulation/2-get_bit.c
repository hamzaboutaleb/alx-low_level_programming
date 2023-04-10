#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: index of bit
 * Return: bit 0 or 1 or -1 if an error occured
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int number_bits;
	unsigned long int mask, result;

	number_bits = sizeof(unsigned long int) * 8;

	if (index >= number_bits)
		return (-1);

	mask = 1 << index;

	result = n & mask;
	result = result >> index;
	return (result);
}
