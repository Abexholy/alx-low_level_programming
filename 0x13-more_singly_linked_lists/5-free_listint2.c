#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list sets the head to NULL
 * @head: Pointer to the head node of the files
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *talo;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		talo = *head;
		*head = (*head)->next;
		free(talo);
	}
}

