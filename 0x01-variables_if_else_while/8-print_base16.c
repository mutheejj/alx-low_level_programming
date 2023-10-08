#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;
	char hex;

	for (num = 0; num < 10; num++)
	{
		putchar(num);
	}
	for (hex = 'a'; hex < 'g'; hex++)
	{
		putchar(hex);
	}
	putchar('\n');
	return (0);
}
