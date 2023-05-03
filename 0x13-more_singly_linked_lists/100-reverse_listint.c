#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t list.
 * @head: A pointer to the address of
 *        the head of the list_t list.
 *
 * Return: A pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *fill = NULL, *tac = *head;

	while (tac)
	{
		listint_t *next = tac->next;

		tac->next = fill;
		fill = tac;
		tac = next;
	}

	*head = fill;
	return (*head);
}

