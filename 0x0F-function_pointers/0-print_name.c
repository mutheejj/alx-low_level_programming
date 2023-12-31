#include "function_pointers.h"
#include <string.h>
#include <stdlib.h>
/**
 * print_name - is a function that prints a name
 * @name: is the name to be printed
 * @f: is a pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
