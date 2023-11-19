#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints the table of multiplication
 * @n:to be checked
 */
void print_times_table(int n)
{
	int i, j, mult = 0;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				mult = i * j;
				if (j > 0)
				{
					_putchar(',');
					_putchar(' ');
					if (mult < 10)
						_putchar(' ');
					else if (mult < 100)
						_putchar(' ');
				}
				if (mult >= 100)
					_putchar(mult / 100 + '0');
				if (mult >= 10)
					_putchar((mult / 10) % 10 + '0');
				_putchar(mult % 10 + '0');
			}
			_putchar('\n');
		}
	}
}
