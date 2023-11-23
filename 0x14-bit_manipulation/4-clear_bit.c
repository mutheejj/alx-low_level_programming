#include "main.h"
/**
 * clear_bit - clear to 0
 * @n: is a pointer
 * @index: is the indes
 * Return: 0 or 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n = *n & ~(1 << index);

	return (1);
}
