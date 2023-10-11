#include "main.h"
/**
 * print_alphabet - Entry point
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
