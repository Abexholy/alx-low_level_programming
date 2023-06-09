#include "main.h"

/**
 * _atoi - convert a string to an integer.
 *
 * @s: the string to use.
 *
 * Return: integer.
 */

int _atoi(char *s)
{
	int sigg = 1, j = 0;
	unsigned int res = 0;

	while (!(s[j] <= '9' && s[j] >= '0') && s[j] != '\0')
	{
		if (s[j] == '-')
			sigg *= -1;
		j++;
	}
	while (s[j] <= '9' && (s[j] >= '0' && s[j] != '\0'))
	{
		res = (res * 10) + (s[j] - '0');
		j++;
	}
	res *= sigg;
	return (res);
}

