#include <stdio.h>
#include <stdlib.h>
/**
 * main - start of the program
 * @argv: is a string
 * @argvc: is an integer
 * return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			sum = sum + atoi(argv[i]);
		}
	}
	else
	{
		printf("not found");
	}
	printf("%d\n", sum);
	return (0);
}
