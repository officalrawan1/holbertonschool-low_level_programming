#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_string - prints a string
 * @str: string to print
 */
static void print_string(char *str)
{
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - prints anything
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	int printed = 0;

	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] == 'c' || format[i] == 'i' ||
		    format[i] == 'f' || format[i] == 's')
		{
			if (printed)
				printf(", ");

			switch (format[i])
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
				print_string(va_arg(args, char *));
				break;
			}
			printed = 1;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
