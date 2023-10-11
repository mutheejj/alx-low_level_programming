#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 */
void print_alphabet_x10(void)
{
	char alpha;
	int line;

	for (line = 0; line < 10; line++)
	{
		for (alpha = 0; alpha < 10; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
