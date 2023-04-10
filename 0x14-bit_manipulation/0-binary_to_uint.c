#include <stdlib.h>
#include "main.h"
/**
 * binary_to_uint - convert binary number to decimal
 * @b: string of number
 * Return: decimal number
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	unsigned int base;

	if (b == NULL)
		return (0);

	result = 0;
	base = 1;
	while (*b)
	{
		if (*b != '0' || *b != '1')
			return (0);

		if (*b == '1')
		{
			result += 1 * base;
		}

		base *= 2;
	}

	return (result);

}
