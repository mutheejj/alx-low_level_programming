#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 */
void print_alphabet_x10(void)
{
	char alpha;
	int line;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		for (line = 0; line < 10; line++)
		{
			_putchar('\n');
		}
		_putchar(alpha);
	}
}
