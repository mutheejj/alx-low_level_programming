#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number i want the square root
 * Return: the square root or 1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (n *_sqrt_recursion(n));
}
