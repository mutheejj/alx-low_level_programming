#include "main.h"
/**
 * print_square - prints the square
 * @size: is the size of the square
 * Return: Always 0 (Success)
 */
void print_square(int size)
{
	int i, line;

	for (i = 0; i < size; i++)
	{
		for (line = 0; line < size; line++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
