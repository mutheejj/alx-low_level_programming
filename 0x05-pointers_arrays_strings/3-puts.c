#include "main.h"
/**
 * _puts - puts a cahr
 * @str: to be put
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
