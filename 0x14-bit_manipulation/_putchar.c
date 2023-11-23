#include <unistd.h>
/**
 * _putchar - writes a character to the standard output
 * @c: the character to print
 * Return: On success
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}
