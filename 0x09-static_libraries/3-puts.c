#include "main.h"
/**
 * _puts - prints a new string, followed by a new line.
 * @str: string to print to stdio
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}

