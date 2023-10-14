#include "main.h"
/**
 * print_square - prints the square
 * @size: is the size of the square
 * Return: Always 0 (Success)
 */
void print_square(int size)
{
	int square, line;

	for (line = 0; line < size; i++)
	{
		for (square = 0; square < size; square++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
