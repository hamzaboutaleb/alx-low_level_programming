#include "main.h"
/**
  * puts_half - pritn second half of string
  * @str: string
  */
void puts_half(char *str)
{
	int i, len;

	for (len = 0; str[len] != '\0'; len++)
	{}

	if (len % 2 == 0)
		i = len / 2;
	else
		i = (len + 1) / 2;

	for (; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
