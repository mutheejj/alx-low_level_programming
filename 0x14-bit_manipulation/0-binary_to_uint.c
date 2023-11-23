#include "main.h"
/**
 * binary_to_uint - is a function that converts binary to int
 * @b: is a binary
 * Return: int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, temp;
	unsigned int count = 0;

	while (*b != '\0')
	{
		temp = *b - '0';

		if (temp != 0 && temp != 1)
			return (0);

		i = i * 2 + temp;
		b++;
		count++;
	}

	return (i);
}
