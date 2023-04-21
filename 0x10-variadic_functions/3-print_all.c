#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - print anything
 * @format: the format
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	int i;
	va_list args;
	char *s, *st = "";

	i = 0;
	va_start(args, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", st, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", st, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", st, va_arg(args, double));
					break;
				case 's':
					s = va_arg(args, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", st, s);
					break;
				default:
					i++;
					continue;
			}
			st = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(args);
}
