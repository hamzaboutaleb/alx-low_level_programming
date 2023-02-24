
/**
  * _isdigit - check if character is digit
  * @c: character to be checked
  * Return: 1 if character is digit 0 otherwise
  */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
