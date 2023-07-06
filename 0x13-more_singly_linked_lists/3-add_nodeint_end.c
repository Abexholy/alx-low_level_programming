#include "lists.h"

/**
 * add_nodeint_end - it Adds a new node to the
 *                   end of a listint_t list.
 * @head: This is a pointer to the address of the
 *        head of the listint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *bow, *first;

	new = malloc(sizeof(listint_t));
	if (bow == NULL)
		return (NULL);

	bow->n = n;
	bow->next = NULL;

	if (*head == NULL)
		*head = bow;

	else
	{
		first = *head;
		while (first->next != NULL)
			first = first->next;
		first->next = bow;
	}

	return (*head);
}
