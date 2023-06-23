#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_char - Prints a character.
 * @arg: A list of arguments pointing to
 *       the character to be printed.
 */
void print_char(va_list arg)
{
	char letters;

	letters = va_arg(arg, int);
	printf("%c", letters);
}

/**
 * print_int - Prints an integer.
 * @arg: A list of arguments pointed to
 *       the integer to be printed.
 */
void print_int(va_list arg)
{
	int number;

	number = va_arg(arg, int);
	printf("%d", number);
}

/**
 * print_float - Prints a float of numbers given.
 * @arg: A list of arguments that is pointing to
 *       the float to be printed.
 */
void print_float(va_list arg)
{
	float decim;

	decim = va_arg(arg, double);
	printf("%f", decim);
}

/**
 * print_string - Prints a string out.
 * @arg: A list of arguments pointed to
 *       the string to be printed out.
 */
void print_string(va_list arg)
{
	char *ptr;

	ptr = va_arg(arg, char *);

	if (ptr == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", ptr);
}

/**
 * print_all - Prints anything written in, followed by a new line.
 * @format: A string of characters representing the argument types of a given prototype.
 * @...: A variable number of arguments to be printed.
 *
 * Description: Any argument not of type char, int, float,
 *              or char * is ignored and exit is executrd.
 *              If a string argument is NULL, (nil) is printed instead.
 */
void print_all(const char * const format, ...)
{
	va_list mars;
	int i = 0, j = 0;
	char *separator = "";
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(mars, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(mars);
			separator = ", ";
		}

		i++;
	}

	printf("\n");

	va_end(mars);
}
