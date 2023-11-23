#include "main.h"
/**
 * get_endianness - is a function
 * Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned int get = 1;
	char *ptr = (char *)&get;

	if (*ptr == 1)
		return (1);
	else
		return (0);
}
