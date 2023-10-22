#include "main.h"
/**
 * _strncpy - to coppy
 * @dest: to be coppied
 * @src: to be pastred
 * @n: number
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (src[j] != '\0' && i < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
