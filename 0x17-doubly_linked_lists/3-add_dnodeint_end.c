#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of
 * a dlistint_t list
 *
 * @head: this is the head of the list
 * @n: the total value of the element
 * Return: return the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *i;
	dlistint_t *nuts;

	nuts = malloc(sizeof(dlistint_t));
	if (nuts == NULL)
		return (NULL);

	nuts->n = n;
	nuts->next = NULL;

	i = *head;

	if (i != NULL)
	{
		while (i->next != NULL)
			i = i->next;
		i->next = nuts;
	}
	else
	{
		*head = nuts;
	}

	nuts->prev = i;

	return (nuts);
}
