#include <stdio.h>

/**
  * main - netry point
  * Return: 0
  */

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	return (0);
}
