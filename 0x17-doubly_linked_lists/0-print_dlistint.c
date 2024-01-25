#include "lists.h"
/**
 * print_dlistint - it will print all elements of a
 * dlistint_t list
 *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int numbers;

	numbers = 0;

	if (h == NULL)
		return (numbers);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		numbers++;
		h = h->next;
	}

	return (numbers);
}
