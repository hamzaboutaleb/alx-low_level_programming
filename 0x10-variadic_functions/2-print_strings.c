#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
  * print_strings - print string
  * @separator: string that separate
  * @n: number of args
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	char *str;
	unsigned int i;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ptr, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(ptr);
}
