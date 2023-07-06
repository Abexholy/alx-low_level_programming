#include "lists.h"

/**
 * free_listint - This Free a listint_t list.
 * @head: A pointer at the head of the listint_t list to be freed.
 */
void free_listint(listint_t *head)
{
	listint_t *pips;

	while (head)
	{
		pips = head->next;
		free(head);
		head = pips;
	}
}
