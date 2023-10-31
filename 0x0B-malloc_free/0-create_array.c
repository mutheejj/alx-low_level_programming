#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of characters
 * @c: is a char
 * Return: NULL
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = (malloc(size * sizeof(char)));
	if (arr == NULL)
	{
		return ('\0');
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
