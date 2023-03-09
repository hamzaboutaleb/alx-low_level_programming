#incldue "main.h"

/**
  * _sqrt - sqrt
  * @n: int
  * @i: int
  * Return: sqrt of number
  */

int _sqrt(int n, int i)
{
	if ((i * i) > n)
		return (-1);
	if ((i * i) == n)
		return (i);
	return (_sqrt(n, i + 1));
}

/**
  * _sqrt_recursion - sqrt by recursion
  * @n: number
  * Return: sqrt of number
  */
int _sqrt_recursion(int n)
{
	if (n < 1)
		return (-1);
	return (_sqrt(n, 1));
}
