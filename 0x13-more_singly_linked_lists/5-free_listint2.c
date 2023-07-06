#include "lists.h"

/**
 * free_listint2 - to Free a listint_t list.
 * @head: A pointer that points to the address of the
 *        head of the listint_t list.
 *
 * Description: Sets the head to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *imp;

	if (head == NULL)
		return;

	while (*head)
	{
		imp = (*head)->next;
		free(*head);
		*head = imp;
	}

	head = NULL;
}
