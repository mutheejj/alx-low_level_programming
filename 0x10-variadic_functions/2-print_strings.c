#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - is a function
 * @separator: is a string
 * @n: is an int
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list(print);
	unsigned int i;

	if (separator == NULL)
	{
		separator = "";
	}
	va_start(print, n);
	for (i = 0; i < n; i++)
	{
		char *str = va_arg(print, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(print);
	printf("\n");
}
