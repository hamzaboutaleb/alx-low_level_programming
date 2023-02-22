#include "main.h"

/**
  * print_to_98 - print number to 98
  * @n: starting number
  */
void print_to_98(int n)
{
	while (n != 98)
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
		if (n > 98)
			n--;
		else if (n < 98)
			n++;
	}
	_putchar('98');
}
