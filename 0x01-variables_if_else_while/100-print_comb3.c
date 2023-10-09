#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int nom, num;

	for (num = 0; num <= 9; num++)
	{
		for (nom = num + 1; nom < 10; nom++)
		{
			putchar((num % 10) + '0');
			putchar((nom % 10) + '0');

			if (num == 5 && nom == 6)
				continue;

				putchar(',');
				putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
