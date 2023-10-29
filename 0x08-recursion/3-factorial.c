#include "main.h"
/**
 * factorial -  returns the factorial of a given number.
 * @n: is the number to be factorized
 * Return: 0, -1 or n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	return (n * factorial(n - 1));
}
