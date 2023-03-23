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
	int j, is_start = 1;
	char *p;
	const char args_f[] = "cifs";

	i = 0;
	va_start(ptr, format);

	while (format && format[i] != '\0')
	{

		j = 0;

		while (args_f[j])
		{
			if (args_f[j] == format[i] && is_start == 0)
			{
				printf(", ");
				break;
			}
			j++;
		}
		switch (format[i])
		{
			case 's':
				p = va_arg(ptr, char *), is_start = 0;
				if (p == NULL)
					printf("(nil)");
				else
					printf("%s", p);
			break;
			case 'i':
				printf("%d", va_arg(ptr, int)), is_start = 0;
			break;
			case 'f':
				printf("%f", va_arg(ptr, double)), is_start = 0;
			break;
			case 'c':
				printf("%c", va_arg(ptr, int)), is_start = 0;
			break;
		}

		i++;
	}
	printf("\n");
	va_end(ptr);
}
