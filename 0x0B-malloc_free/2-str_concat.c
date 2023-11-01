#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - str_concat
 * @s1: is a string
 * @s2: is also a string
 * Return: null or a string
 */
char *str_concat(char *s1, char *s2)
{
	char *new;
	int i, j;
	int total;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = strlen(s1);
	j = strlen(s2);
	total = i + j + 1;
	new = (char *)malloc(total * sizeof(char));
	if (new == NULL)
	{
		return (NULL);
	}

	strcpy(new, s1);
	strcat(new, s2);
	return (new);
}
