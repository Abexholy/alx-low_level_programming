#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings and then a new line.
 * @separator: The string printed between strings.
 * @n: The number of strings passed in to the function.
 * @...: A variable number of strings to be printed out.
 *
 * Description: If the separator is NULL, it is not printed.
 *              If one of the strings if NULL, (nil) is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list school;
	char *dar;
	unsigned int indes;

	va_start(school, n);

	for (indes = 0; indes < n; indes++)
	{
		dar = va_arg(school, char *);

		if (dar == NULL)
			printf("(nil)");
		else
			printf("%s", dar);

		if (indes != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(school);
}
