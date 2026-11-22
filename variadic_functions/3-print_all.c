#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_separator - prints separator if needed
 * @printed: indicates if an argument was printed
 */
static void print_separator(int printed)
{
	if (printed)
		printf(", ");
}

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
		switch (format[i])
		{
		case 'c':
			print_separator(printed);
			printf("%c", va_arg(args, int));
			printed = 1;
			break;
		case 'i':
			print_separator(printed);
			printf("%d", va_arg(args, int));
			printed = 1;
			break;
		case 'f':
			print_separator(printed);
			printf("%f", va_arg(args, double));
			printed = 1;
			break;
		case 's':
			print_separator(printed);
			print_string(va_arg(args, char *));
			printed = 1;
			break;
		}
		i++;
	}

	va_end(args);
	printf("\n");
}
