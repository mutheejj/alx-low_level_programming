#include "main.h"
/**
 * times_table - Entry point
 */
void times_table(void)
{
	int nine, num, times;

	for (nine = 0; nine <= 9; nine++)
	{
		_putchar('0');
		for (num = 1; num <= 9; num++)
		{
			_putchar(',');
			_putchar(' ');

			times = nine * num;

			if (times <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((times / 10) + '0');
			}
			_putchar((times % 10) + '0');
		}
		_putchar('\n');
	}
}
