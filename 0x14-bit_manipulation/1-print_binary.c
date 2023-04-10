#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number to print as binary
*/
void print_binary(unsigned long int n)
{
	unsigned int base = 0;
	unsigned long int sum = 0;
	unsigned long int value;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}
	while (sum < n)
	{
		sum += _pow(2, base);
		base++;
	}
	base--;

	while (base + 1)
	{
		value = _pow(2, base);

		if (value <= n)
		{
			_putchar('1');
			n -= value;
			base--;
		}
		else
		{
			_putchar('0');
			base--;
		}
	}

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
