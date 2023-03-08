#include "main.h"
/**
  * _puts_recursion - print string recursive way
  * @s: strng to print
  */
void _puts_recursion(char *s)
{
	if (s[0] == '\0')
	{
		_putchar(s[0]);
		return;
	}
	_putchar(s[0]);
	s++;
	_puts_recursion(s);
}
