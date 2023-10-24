#include "main.h"
/**
 * _memcpy - copies the memory
 * @dest: to be copied the memory
 * @src: to copy the memory
 * @n: to be cheked
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
