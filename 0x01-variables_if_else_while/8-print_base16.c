#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;
	char hex;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
	}
	for (hex = 'a'; hex < 'g'; hex++)
	{
		putchar(hex);
	}
	putchar('\n');
	return (0);
}
