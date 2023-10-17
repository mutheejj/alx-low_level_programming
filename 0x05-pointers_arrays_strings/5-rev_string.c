#include "main.h"
/**
 * rev_string - reverse
 * @s: to be reversed
 */
void rev_string(char *s)
{
	int i, j, k;
	char *a, b;

	a = s;

	while (s[j] != '\0')
	{
		j++;
	}
	for (k = 1; k < j; k++)
	{
		a++;
	}
	for (i = 0; i < (k / 2); i++)
	{
		b = s[i];
		s[i] = *a;
		*a = b;
		a--;
	}
}
