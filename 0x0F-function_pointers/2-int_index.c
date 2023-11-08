#include "function_pointers.h"
/**
 * int_index - is a function
 * @array: is an array
 * @size: is the size
 * @cmp: is a pointe
 * Return: index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
				{
					return (i);
				}
				i++;
			}
		}
	}
	return (-1);
}
