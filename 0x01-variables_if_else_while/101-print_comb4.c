#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int one, two, three;

	for (one = 0; one < 9; one++)
	{
		for (two = 0; two < 8; two++)
		{
			for (three = 0; three < 7; three++)
			{
				if (one < two && two < three)
				{
					putchar(one + '0');
					putchar(two + '0');
					putchar(three + '0');

					if (!(one == 7 && two == 8 && three == 9)
							{
							putchar(',');
							putchr(' ');
							}
				}
			}
		}
	}
	return (0);
}
