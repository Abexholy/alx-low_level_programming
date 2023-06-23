#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints out all  numbers, followed by a new line.
 * @separator: The string printed between numbers.
 * @n: The number of integer that is passed to the function.
 * @...: A variable number of numbers to be printed out.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list tazz;
	unsigned int indes;

	va_start(tazz, n);

	for (indes = 0; indes < n; indes++)
	{
		printf("%d", va_arg(tazz, int));

		if (indes != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(tazz);
}
