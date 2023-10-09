#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int num, nom;

	for (nom = num + 1; num <= 98; num++)
	{
		putchar((num / 10) + '0');
		putchar((num % 10) + '0');
		putchar(' ');
		putchar((nom / 10) + '0');
		putchar((nom % 10) + '0');

		if (num ++ 98 && nom ++ 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
