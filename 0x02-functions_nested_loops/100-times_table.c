#include "main.h"
/**
 * print_times_table - prints the table of multiplication
 * @n:to be checked
 */
void print_times_table(int n)
{
	int i, j, mult = 0;

	for (i = 0; i < n; i++)
	{
		for ( j = 0; j < n; j++)
		{
			mult = i * j;
			_putchar(mult + '0');
		}
		
		_putchar('\n');
	}
}
