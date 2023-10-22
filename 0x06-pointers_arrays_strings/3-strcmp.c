#include "main.h"
/**
 * _strcmp - to copy
 * @s1: to be cpoied
 * @s2: to be chheckde
 * Return: s1 - s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i] != '\0' && s2[j] != '\0')
	{
		if (s1[i] != s2[j])
		{
			return (s1[i] - s2[j]);
		}
		j++;
		i++;
	}
	return (s1[i] - s2[j]);
}
