#include "main.h"

/**
  * print_triangle - print triangle with # with size
  * @size: size fo triangle
  */

void print_triangle(int size)
{
	int i, j;
	
	if (size > 0)
		for (i = 1; i <= size; i++)
		{
			for (j = 0; j < size - i ; j++)
				_putchar(' ');
			_putchar('#');
			_putchar('\n');
		}
	else
		_putchar('\n');
}
