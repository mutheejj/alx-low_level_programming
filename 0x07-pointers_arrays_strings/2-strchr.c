#include "main.h"
#include <stddef.h>
/**
 * _strchr - locate a character
 * @s: is a string
 * @c: is the character am looking for
 * Return: character or the null
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (NULL);
}
