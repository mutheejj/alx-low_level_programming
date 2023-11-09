#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers folloed by a new line
 * @separator: is a separator
 * @n: is an int
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list(print);
	if (separator == NULL)
	{
		separator = "";
	}
	va_start(print, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(print, int));
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(print);
	printf("\n");
}
