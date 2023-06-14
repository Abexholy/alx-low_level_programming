#include "main.h"
#include <stdlib.h>

/**
 * create_array - code that creates an array of charts
 * @size: The tottal size of the array
 * @c : The chart to fill d array
 * Return - arraay
 */

char *create_array(unsigned int size, char c)
{
	char *st;
	unsigned int j;

	st = malloc(sizeof(char) * size);
	if (size == 0 || st == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
		st[j] = c;
	return (st);
}

