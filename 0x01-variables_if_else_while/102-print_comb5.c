#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int num, nom1;

	for (nom1 = num + 1; num <= 98; num++)
	{
		putchar((num / 10) + '0');
		putchar((num % 10) + '0');
		putchar(' ');
		putchar((nom1 / 10) + '0');
		putchar((nom1 % 10) + '0');

		if (num == 98 && nom1 == 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
