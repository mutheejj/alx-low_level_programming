#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(int argc, char *argv[])
{
	int i, n, j;
	int sum = 0;

	for (i = 0; i < argc; i++)
	{
		n = argc - 1;
	}
	if (n == 0 || n == 1)
	{
		printf("Error\n");
		return (0);
	}
	for (j = 1; j < argc; j++)
	{
		if (isdigit(argv[j];))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			 printf("Error\n");
		}
	}
	printf("%d\n", sum);
	return (0);
}
