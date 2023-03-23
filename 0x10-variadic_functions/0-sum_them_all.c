#include <stdarg.h>
/**
  * sum_them_all - sum of n number
  * @n: number of parms
  * Return: int
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list v_ptr;
	int sum;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(v_ptr, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(v_ptr, int);
	}

	va_end(v_ptr);

	return (sum);
}
