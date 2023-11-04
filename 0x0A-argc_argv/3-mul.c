#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - is where the progrm starts
 * @argv: is a string
 * @argc: is an integer
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;
	int mult = 1;
	int n;

	for (i = 0; i < argc; i++)
	{
		n = argc - 1;
	}
	if (n == 0 || n == 1 )
	{
		printf("Error\n");
	}
	if (n > 1)
	{
		for (i = 1; i < argc; i++)
		{
			mult *= atoi(argv[i]);
		}
		printf("%d\n", mult);
	}
	return (0);
}
