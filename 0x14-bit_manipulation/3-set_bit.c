#include "main.h"
/**
 * set_bit - sets a bit to 1
 * @n: is a pointer
 * @index: is the index
 * Return: 0 or 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n = *n | (1 << index);

	return (1);
}
