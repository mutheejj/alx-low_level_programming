#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include "variadic_functions.h"
/**
 * print_all - a function
 * @format: is a format
 */
void print_all(const char * const format, ...)
{
	va_list all;
	va_start(all, format);

	while (*format != '\0')
	{
		if (*format == 'c')
		{
			int c = va_arg(all, int);
			printf("%c", c);
		}
		else if (*format == 'i')
		{
			int i = va_arg(all, int);
			printf("%d", i);
		}
		else if (*format == 'f')
		{
			double f = va_arg(all, double);
			printf("%f", f);
		}
		else if (*format == 's')
		{
			char *s = va_arg(all, char*);
			if (s == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", s);
			}
		}
	}
	va_end(all);
	printf("\n");
}
