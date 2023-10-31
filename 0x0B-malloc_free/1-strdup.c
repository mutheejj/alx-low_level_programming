#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: is a string
 * Return: a char
 */
char *_strdup(char *str)
{
	char *new;
	int j;
	int i = 0;
	
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	new = (char *) malloc((i + 1) * sizeof(char));
	if (new == NULL)
	{
		return (NULL);
	}
	for (j = 0; j <= i; j++)
	{
		new[i] = str[i];
	}
	return (new);
}
