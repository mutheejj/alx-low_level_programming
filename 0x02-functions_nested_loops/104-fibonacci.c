#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first = 1, second = 2, next, i;
	
	printf("%d, %d, ", first, second);
	
	for (i = 2; i < 98; i++)
	{
		next = first + second;
		printf("%d", next);
		if (i < 97)
		{
			printf(", ");
		}
		first = second;
		second = next;
	}
	printf("\n");
	return (0);
}
