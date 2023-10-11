#include "main.h"
/**
 * _islower - Entry point
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	int n;

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

