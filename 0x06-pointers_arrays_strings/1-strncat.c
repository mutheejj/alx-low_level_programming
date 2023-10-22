#include "main.h"
/**
 * _strncat - copies or concentates two strings
 * @dest: l
 * @src: l
 * @n: to be cheched 
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, k;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != n)
	{
		dest[i] = src[j];
		j++;
	}
	dest[i] = '\n';
	return (dest);
}
