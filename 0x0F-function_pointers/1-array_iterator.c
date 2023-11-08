#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - function
 * @array: is an array of integer
 * @size: is the size of array
 * @action: is the function to pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
