/**
 * file: 2-print_alphabet.c
 * author: john muthee maina
 */
#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description:
 * this program prints the lowercase alphabet from 'a' to 'z' followed by a newline.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
