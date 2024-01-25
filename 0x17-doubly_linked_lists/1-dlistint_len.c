#include "lists.h"

/**
 * dlistint_len - this returns the total number of elements in
 * a double linked list to the terminal
 *
 * @h: this is the head of the list
 * Return: the number of nodes found
 */
size_t dlistint_len(const dlistint_t *h)
{
	int numbers;

	numbers = 0;

	if (h == NULL)
		return (numbers);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		numbers++;
		h = h->next;
	}

	return (numbers);
}
