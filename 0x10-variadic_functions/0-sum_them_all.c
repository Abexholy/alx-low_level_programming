#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all values in paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters should return.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list boze;
	unsigned int tssl, sum = 0;

	va_start(boze, n);

	for (tssl = 0; tssl < n; tssl++)
		sum += va_arg(boze, int);

	va_end(boze);

	return (sum);
}
