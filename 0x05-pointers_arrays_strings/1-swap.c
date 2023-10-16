#include "main.h"
/**
 * swap_int - swaps the values
 * @a: to be swaped with b
 * @b: to be swaped with a
 */
void swap_int(int *a, int *b)
{
	*a = b;
	*b = a;
}
