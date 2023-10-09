#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int one, two, three;

	for (one = 0; one < 8; one++)
	{
		for (two = one + 1; two < 9; two++)
		{
			for (three = two + 1; three < 10; three++)
			{
				if (one < two && two < three)
				{
					putchar((one % 10) + '0');
					putchar(two % 10) + '0');
					putchar(three % 10) + '0');

					if (!(one == 7 && two == 8 && three == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
