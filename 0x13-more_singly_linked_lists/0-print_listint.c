#include "lists.h"
#include <stdio.h>

/**
 * print_listint - this will print out element of listing
 *
 * @h : the head of list nodes
 *
 * Return: i
 * number of loops
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
