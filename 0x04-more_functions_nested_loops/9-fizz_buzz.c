#include <stdio.h>
/**
 * main - Entry Point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char fizz = "Fizz", buzz = "Buzz";
	
	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0)
		{
			printf("%s ", fizz);
		}
		else if (num % 5 == 0)
		{
			printf("%s ", buzz);
		}
		else if (num % 3 == 0 && num % 5 == 0)
		{
			printf("%s%s ", fizz, buzz);
		else
		{
			printf("%d ", num);
		}
	}
	printf("\n");
	return (0);
}
