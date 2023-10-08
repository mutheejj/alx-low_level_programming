#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int hex;

	for (hex = 'a'; hex < 'f'; hex++)
	{
		putchar(hex);
	}
	putchar('\n');
	return (0);
}
