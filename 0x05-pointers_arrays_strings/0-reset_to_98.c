#include "main.c"
/**
 * reset_to_98 - resetes the int to 98
 * Return: Always 0 (Success)
 */
void reset_to_98(int *n)
{
	int a = 98;
	*n = &a;

