#include "main.h"

/**
  * print_sign - check number if positive or negative
  * @n: number to bech checked
  *
  * Return: 1 if greater than 0, -1 if less than zero , 0 if is zero
  */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
