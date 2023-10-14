#include "main.h"
/**
 * print_square - prints the square
 * @size: is the size of the square
 * Return: Always 0 (Success)
 */
void print_square(int size)
{
	int line, hash;
	
	if (size <= 0)
	{
		for (line = 0; line < size; line++)
		{
			for (hash = 0; hash < size; hash++)
			{
				_putchar('#');
			}
			if (line == size - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
