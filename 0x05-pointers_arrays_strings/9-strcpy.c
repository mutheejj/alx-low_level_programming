#include "main.h"
/**
 * _strcpy - to coppy
 * @dest: this is to be chcked
 * @src: so coppy
 * Return: cppy
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while ( dest[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
