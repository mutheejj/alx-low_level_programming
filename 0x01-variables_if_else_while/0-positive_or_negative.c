/**
 * file: 0-positive_or_negative.c
 * Auth: John Muthee Maina
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point of the program
 * the program prints the number and if its positive or negative
 * return: always 0. (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
