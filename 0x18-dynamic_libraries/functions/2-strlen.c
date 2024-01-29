#include "main.h"

/**
 * _strlen - Returns length of a string.
 * @s: string.
 *
 * Return: The Length.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
}
