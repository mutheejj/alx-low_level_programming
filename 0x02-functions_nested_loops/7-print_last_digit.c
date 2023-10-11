#include "main.h"
/**
 * print_last_digit - Entry point
 * @a: used
 * Return: Value of the last digit
 */
int print_last_digit(int a)
{
	int last = a % 10;

	if (last < 0)
	{
		last*=-1;
	}
	_putchar(last + '0');
	return (last);
}
