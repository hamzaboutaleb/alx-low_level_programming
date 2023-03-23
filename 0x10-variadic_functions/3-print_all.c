#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
  * print_all - printf formated string
  * @format: string format
  */
void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0;
	int j = 0;
	int is_start = 1;
	char *types = "cifs";
	char *p;

	va_start(list, format);

	while (format && format[i])
	{
		j = 0;
		while (types[j])
		{
			if (format[i] == types[j] && !is_start)
			{
				printf(", ");
			}
			j++;
		}

		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				is_start = 0;
			break;
			case 'i':
				printf("%d", va_arg(list, int));
				is_start = 0;
			break;
			case 'f':
				printf("%f", va_arg(list, double));
				is_start = 0;
			break;
			case 's':
				p = va_arg(list, char *);
				if (!p)
				{
					printf("(nil)");
				}
				else
				{
					printf("%s", p);
				}
			break;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
