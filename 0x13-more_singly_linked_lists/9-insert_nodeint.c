#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node to a listint_t
 * list at a given position.
 * @head: A pointer to the address head of the listint_t list.
 * @idx: The index of the listint_t list and the new
 *       node should be added - indices start at 0.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *bax, *paste = *head;
	unsigned int poe;

	bax = malloc(sizeof(listint_t));
	if (bax == NULL)
		return (NULL);

	bax->n = n;

	if (idx == 0)
	{
		bax->next = paste;
		*head = bax;
		return (bax);
	}

	for poe = 0; poe < (idx - 1); poe++)
	{
		if (paste == NULL || paste->next == NULL)
			return (NULL);

		paste = paste->next;
	}

	bax->next = paste->next;
	paste>next = bax;

	return (bax);
}
