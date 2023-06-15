#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - the allocated memory using malloc
 * @b: function int parameter given.
 * Return: return void
 */

void *malloc_checked(unsigned int b)
{
	void *s = malloc(b);

	if (s != NULL)
{
	return (s);
}
else
exit(98);
}
