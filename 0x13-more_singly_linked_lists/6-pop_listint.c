#include "lists.h"

/**
 * pop_listint - it deletes the head of the node listint_t list.
 * @head: A pointer to the address of the head of the listint_t list.
 *
 * Return: If the linked list is empty - 0.
 *         Otherwise - The head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *bio;
	int rat;

	if (*head == NULL)
		return (0);

	bio = *head;
	rat = (*head)->n;
	*head = (*head)->next;

	free(bio);

	return (rat);
}
