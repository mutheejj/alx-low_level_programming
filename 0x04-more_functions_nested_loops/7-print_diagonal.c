#include "main.h"
/**
 * print_diagonal - Entry point
 * @n: The number of \ characters to be printed.
 */
void print_diagonal(int n)
{
	int i, line;

	if (n > 0)
	{
		for (i = 0; i < n;  i++)
		{
			for (line = 0; line < i; line++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			if (line == n - 1)
			{
				_putchar('\n');
			}
		}
	}
	_putchar('\n');
}
