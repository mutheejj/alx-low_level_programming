#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - is a function
 * @b: is an iteger
 */
void *malloc_checked(unsigned int b)
{
	void *there = malloc(b);

	if (there == NULL)
	{
		exit(98);
	}
}
