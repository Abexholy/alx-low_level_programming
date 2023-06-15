#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block to another
 * @ptr: function parameter of code
 * @old_size: function
 * @new_size: functions
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *g;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return ((void *)malloc(new_size));
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	g = malloc(new_size);
	if (g == NULL)
		return (NULL);
	if (old_size > new_size)
		old_size = new_size;
	while (old_size--)
		g[old_size] = ((char *)ptr)[old_size];
	free(ptr);
	return ((void *)g);
}
