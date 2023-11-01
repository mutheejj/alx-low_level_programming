#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 * @width: is the width
 * @height: is the nyumber of colums
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ptr = (int **)malloc(width * sizeof(int *));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		ptr[i] = (int *)malloc(height * sizeof(int));

		if (ptr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(ptr[j]);
			}
			free(ptr);
			return (NULL);
		}
	}
	return (ptr);
}
