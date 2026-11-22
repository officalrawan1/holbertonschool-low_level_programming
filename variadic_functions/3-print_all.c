#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int printed = 0;
	int valid;
	char *str;

	va_start(args, format);

	while (format && *format)
	{
		valid = 0;

		switch (*format)
		{
		case 'c':
		case 'i':
		case 'f':
		case 's':
			valid = 1;
			break;
		}

		if (valid)
		{
			printed && printf(", ");

			switch (*format)
			{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				str && printf("%s", str);
				!str && printf("(nil)");
				break;
			}
			printed = 1;
		}
		format++;
	}

	va_end(args);
	printf("\n");
}
