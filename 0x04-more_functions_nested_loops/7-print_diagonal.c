#include "main.h"
/**
 * print_diagonal - Entry point
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	int i, line;

	for(i = 0; i < n;  i++)
	{
		_putchar('\');
		_putchar('\n');
		for (line = 0; line < n; line ++)
		{
			_putchar(' ');
		}
	}
	return (0);
}
