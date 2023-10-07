/**
 * file: 0-positive_or_negative.c
 * Auth: John Muthee Maina
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more header goes here */

/**
 * main - prints whether the number is positive or negative.
 * return: always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes here */

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
