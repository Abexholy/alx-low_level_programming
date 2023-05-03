#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list sets the head to NULL
 * @head: Pointer to the head node of the files
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *fills;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		fills = *head;
		*head = (*head)->next;
		free(fills)
	}
}

