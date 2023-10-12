#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first = 1, second = 2, next, ;
	
	printf("%d, %d, ", first, second);
	
	for (int i = 0; i <= 98; i++)
	{
		next = first + second;
		printf("%d", next);
		if (i <= 98)
		{
			printf(", ");
		}
		first = second;
		second = next;
	}
	printf("\n");
	return (0);
}
