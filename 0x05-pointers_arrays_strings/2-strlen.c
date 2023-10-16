#include "main.h"
/**
 * _strlen - displays the lenth
 * @s: to be determined
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
