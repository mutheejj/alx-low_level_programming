#include "main.h"
/**
 * mul - Enrty point
 * @a: number to be multipled
 * @b: also to be multiplied
 * Return: Always 0 (Success)
 */
int mul(int a, int b)
{
	int mult, lst;

	mult = a * b;
	if (mult == 0)
	{
		_putchar('0');
	}
	else if (mult < 0)
	{
		_putchar('-');
		mult = -mult;
	}
	while (mult > 0)
	{
		lst = mult % 10;
		putchar(lst + '0');
		mult /=10;
	}
	return (0);
}
