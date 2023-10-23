#include "main.h"
/**
 * _memset -  fills the first n bytes of the memory area pointed to by s with the constant byte b
 * @s: the location
 * @b: to be added
 * @n: number of times
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
