#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node in the index of a linked list.
 *
 * @head: A pointer to the head listint_t list.
 * @index: The index node that should be deleted.
 *
 * Return: 1 if it succeed, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tac, *tour;
	unsigned int number;

	if (head == NULL || *head == NULL)
		return (-1);

	tac = *head;
	if (index == 0)
	{
		*head = tac->next;
		free(tac);
		return (1);
	}

	for (number = 0; number < index && tac != NULL; number++)
	{
		tour = tac;
		tac = tac->next;
	}

	if (tac == NULL)
		return (-1);

	tour->next = tac->next;
	free(tac);

	return (1);
}

