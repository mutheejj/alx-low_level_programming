#include "main.h"
/**
 * 3-puts.c - puts a cahr
 * @str: to be put
 */
void _puts(char *str)
{
	char a = &str;
	
	_puts(a);
	_puts('\n');
}
