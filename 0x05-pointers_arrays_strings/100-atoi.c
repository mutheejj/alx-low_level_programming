#include "main.h"
/**
 * _atoi - convertes strings to numbers
 * @s: the string to be converted
 * Return: Always 0 (Success)
 */
int _atoi(char *s)
{
	int i = 0;
	int x = 0;
	int sn = 1;

	if (s[i] == '-')
	{
		sn = -1;
		i++;
	}
	else
	{
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		x = x * 10 + (s[i] - '0');
		i++;
	}
	return (x * sn);
}
