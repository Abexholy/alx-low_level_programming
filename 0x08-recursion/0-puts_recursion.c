#include "main.h"
/**
 * __puts_recursion - is called to print string followed by a new line.
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
