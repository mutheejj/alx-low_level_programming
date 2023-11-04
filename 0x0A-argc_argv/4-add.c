#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(int argc, char *argv[])
{
	int i, n, j;
	int sum = 0;
	n = argc - 1;

	if (n <= 1)
	{
		printf("Error\n");
		return (0);
	}
	for (j = 1; j < argc; j++)
	{
		for (i = 0; argv[j][i] != '\0'; i++)
		{
			if (!isdigit(argv[j][i]))
			{
				printf("Error\n");
				return (0);
			}
			else
			{
				sum += argv[j][i] - '0';
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
