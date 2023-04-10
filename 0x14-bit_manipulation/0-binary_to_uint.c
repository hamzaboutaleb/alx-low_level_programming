#include <stdlib.h>
#include <string.h>
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
	int len, i = 0;

	if (b == NULL)
		return (0);

	len = strlen(b);
	result = 0;
	base = 1;
	while (b[len - i - 1])
	{
		if (b[len - i - 1] != '0' && b[len - i - 1] != '1')
			return (0);

		if (b[len - i - 1] == '1')
		{
			result += 1 * base;
		}

		i++;
		base *= 2;
	}

	return (result);

}
