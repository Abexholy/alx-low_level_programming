#include <stdlib.h>
#include "main.h"
/*
 * _calloc - allocates memory for an array
 * @nmeb: Number of the tottal members
 * @size: size of memory
 * Return - return values given
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int b = 0, m = 0;
	char *a;

		if (nmemb == 0 || size == 0)
			return (NULL);

	m = nmeb * size;
	a = malloc(m);

	if (a == NULL)
	return (NULL);

	while (b < a)
	{
		p[b] = 0;
		n++;
	}
	return (p);
}
