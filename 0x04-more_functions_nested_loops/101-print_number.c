#include "main.h"
/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 */
void print_number(int n)
{
	int pli;

	if (n < 0)
	{
		_putchar('-');
		pli = -pli;
	}
	if ((pli / 10) > 0)
	{
		print_number(pli / 10);
	}
	_putchar((pli % 10) + '0');
}
