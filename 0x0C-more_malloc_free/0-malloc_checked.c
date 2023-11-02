#include "main.h"
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - is a function
 * @b: is an iteger
 */
void *malloc_checked(unsigned int b)
{
       int *ptr;
       ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
