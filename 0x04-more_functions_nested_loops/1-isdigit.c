#include "main.h"
/**
 * _isdigit - Entry point
 * @c: charater to be checked
 * Return: 1 if its a digit, else 0
 */
int _isdigit(int c)
{
	if (c > 48 && c < 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
