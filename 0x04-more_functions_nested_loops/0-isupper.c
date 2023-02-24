#include "main.h"

/**
  * _isupper - function check fi number is uppercase
  * @c: character to be checked
  * Return: 1 if character is upper case otherwise 0
  */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
