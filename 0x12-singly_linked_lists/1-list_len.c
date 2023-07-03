#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in the linked list out.
 * @h: pointer to the list_t
 *
 * Return: number of elements in the h
 */
size_t list_len(const list_t *h)
{
	size_t gi = 0;

	while (h)
	{
		g++;
		h = h->next;
	}
	return (g);
}

