#include "main.h"
/**
 * get_bit - return value at index
 * @n: is the number
 * @index: ...
 * Return: value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n >> index) & 1);
}
