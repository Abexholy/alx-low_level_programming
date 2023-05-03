#include "lists.h"
#include <stdio.h>

/**
 * print_list list : size_t print_listint(const listint_t *h);
 *
 * headerfile : head of list nodes
 *
 * Return the number of loops
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;

	}
	return (count);
}
