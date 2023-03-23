#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
  * print_all - printf formated string
  * @format: string format
  */
void print_all(const char * const format, ...)
{
	va_list ptr;
	size_t i;
	char *p;

	i = 0;
	va_start(ptr, format);
	while (format && format[i] != '\0')
	{
		switch (format[i])
		{
			case 's':
				p = va_arg(ptr, char *);
				if (p == NULL)
					printf("(nil)");
				else
					printf("%s", p);
			break;
			case 'i':
				printf("%d", va_arg(ptr, int));
			break;
			case 'f':
				printf("%f", va_arg(ptr, double));
			break;
			case 'c':
				printf("%c", va_arg(ptr, int));
			break;
		}

		if (i != strlen(format) - 1 && (format[i] == 'c' || format[i] == 's' || format[i] == 'f' || format[i] == 'i'))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ptr);
}
