#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: index of bit
 * Return: bit 0 or 1 or -1 if an error occured
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int number_bits;
	unsigned long int mask, result;

	number_bits = sizeof(unsigned long int) * 8;

	if (index >= number_bits)
		return (-1);

	mask = _pow(2, index);

	result = n & mask;
	result = result >> index;
	return (result);
}


/**
 * _pow - return power of number
 * @b: base
 * @exp: exponent
 * Return: power of number
*/
int _pow(int b, int exp)
{
	int result = 1;

	if (exp == 0)
		return (1);
	while (exp > 0)
	{
		result *= b;
		exp--;
	}
	return (result);
}
