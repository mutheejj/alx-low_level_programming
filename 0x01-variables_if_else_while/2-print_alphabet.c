/**
 * file: 2-print_alphabet.c
 * author: john muthee maina
 */
#include <stdio.h>
/**
 * main - entry point of the program
 *
 * the program prins alphabets a to z
 *
 * return: always 0 (success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
