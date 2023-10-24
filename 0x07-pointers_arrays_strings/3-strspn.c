#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: to be checked
 * @accept: to be checked
 * Return: the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;

	while (s[i] != '\0' && accept[i] != '\0')
	{
		i++;
	}
	return (i);
}
