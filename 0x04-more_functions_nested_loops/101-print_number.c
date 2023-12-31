#include "main.h"
/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 * Return: Always 0 (Success)
 */
void print_number(int n)
{
	if (n > 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 != 0)
	{
		print_number(n / 10);
	}
	print_number(n / 10);
	return (0);
}
