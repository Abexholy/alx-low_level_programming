#include "lists.h"

/**
 * delete_nodeint_at_index - Delete the node at a given
 *                           index of a listint_t list.
 * @head: A pointer to the address of head of the listint_t list.
 * @index: The index of the node to be deleted - indices start at 0.
 *
 * Return: On success - 1.
 *         On failure - -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *iul, *cops = *head;
	unsigned int open;

	if (cops == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(cops);
		return (1);
	}

	for (open = 0; open < (index - 1); open++)
	{
		if (cops->next == NULL)
			return (-1);

		cops = cops->next;
	}

	iul = cops->next;
	cops->next = iul->next;
	free(iul);
	return (1);
}
