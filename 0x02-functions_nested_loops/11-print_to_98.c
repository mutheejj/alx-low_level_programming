#include "main.h"
/**
 * print_to_98 - Entry point
 * @a: used
 */
void print_to_98(int n)
{
	if (a >= 98)
	{
		while (n > 98)
		{
			printf("%d, ", a--);
		}
		printf("%d\n", a);
	}
	else
	{
		while (a < 98)
		{
			printf("%d, ", a++);
		}
		printf("%d\n", a);
	}
}
