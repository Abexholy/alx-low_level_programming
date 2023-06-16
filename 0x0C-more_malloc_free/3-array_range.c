#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of all the integers
 * @min: function parameter of code
 * @max: function parameter
 * Return: NULL or pointer
 */

int *array_range(int min, int max)
{
	int *f, a;

	if (min > max)
		return (NULL);
	f = malloc((max - min + 1) * sizeof(*f));
	if (f == NULL)
		return (NULL);
	for (a = 0; min + a <= max; a++)
		f[a] = min + a;
	return (f);
}
