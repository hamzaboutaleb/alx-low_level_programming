#include "main.h"

/**
  * print_last_digit - print last digit
  * @n: number to print its last digit
  * Return: last digit
  */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	_putchar(last_digit);
	return (last_digit);
}
