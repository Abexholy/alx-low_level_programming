#include "main.h"
/**
 * function that prints string, followed by a new line
 * _puts_recursion - is called to print,
 * @s: is input or string.
 * return : 0
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
