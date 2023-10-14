#include "main.h"
/**
 * print_diagonal - Entry point
 * @n: The number of \ characters to be printed.
 */
void print_diagonal(int n)
{
	int i, line;
	
	for (i = 0; i < n;  i++)
	{
		for (line = 0; line < n; line++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		if (line == n - 1)
		{
			_putchar('\n');
			
		}
	}
	return (0);
}
