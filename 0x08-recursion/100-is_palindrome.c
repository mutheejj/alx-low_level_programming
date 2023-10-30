#include "main.h"
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: is te string
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{
	int i = 0, j = 0;
	while (s[i] >= 0 && s[j] >= 0)
	{
		i++;
		--j;
		if (s[i] == s[j])
		{
			return (1);
		}
	}
	return (0);
}
