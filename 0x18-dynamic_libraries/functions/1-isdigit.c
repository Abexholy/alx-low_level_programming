#include "main.h"

/**
 * _isdigit - This is function that checks for a digit 0-9
 * @c: input
 * Return: to return 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
