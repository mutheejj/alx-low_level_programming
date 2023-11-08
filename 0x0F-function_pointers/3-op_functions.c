#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - is afunction
 * @a: is an integer
 * @b: is an integer
 * Return: remender
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - is a function
 * @a: is an integer
 * @b: is an iteger
 * Return: digffrence
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - is a function
 * @a: is an iteger
 * @b: is an integer
 * Return: mult
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - is for division
 * @a: is an iteger
 * @b: is an iteger
 * Return: mult
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - is a function
 * @a: is an iteger
 * @b: is an iteger
 * Return: mod
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
