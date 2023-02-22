#include "main.h"
#include <stdio.h>

/**
  * print_to_98 - print number to 98
  * @n: starting number
  */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d", n);
		_putchar(',');
		_putchar(' ');
		if (n > 98)
			n--;
		else if (n < 98)
			n++;
	}
	printf("98\n");
}

