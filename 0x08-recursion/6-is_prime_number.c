#include "main.h"
#include <math.h>
/**
 * is_prime_number -  returns 1 if the input integer is a
 * prime number, otherwise return 0
 * @n: the number to be checked.
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n <= 3)
	{
		return (1);
	}
	if (n % 2 == 0)
	{
		return (0);
	}
	return (1);
}
