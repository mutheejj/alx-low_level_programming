#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - is the start of the program
 * @argv: is a string of vecrors
 * @argc: is an integer
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
