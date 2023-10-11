#include "main.h"
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char small;
	for (small = 'a'; small <= 'z'; small++)
	{
		_putchar(small);
		_putchar('\n');
	}
}
