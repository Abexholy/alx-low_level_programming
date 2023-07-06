#include "lists.h"
#include <stdio.h>

/**
 * listint_len - It returns the number of all elements
 *               in a linked listint_t list.
 * @h: A pointer to the head of the listint_t list.
 *
 * Return: The number of elements in the listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t nikes = 0;

	while (h)
	{
		nikes++;
		h = h->next;
	}

	return (nikes);
}
