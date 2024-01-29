#include "main.h"

/**
 * _strcmp - This compares pointers to two strings.
 * @s1: A pointer to first string to be compared.
 * @s2: pointer to the second string to be compared.
 *
 * Return: If str1 < str2, the negative difference
 *         If str1 == str2, 0.
 *         If str1 > str2, the positive difference
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
