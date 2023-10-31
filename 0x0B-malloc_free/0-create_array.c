#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of characters
 * @c: is a cha
 * @size: is dr
 * Return: NULL
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = (char *)malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
