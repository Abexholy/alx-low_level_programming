#include "main.h"

/**
 * _isupper - This is a function that checks for uppercase character
 * @c: input
 *
 * Return: code to return 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
