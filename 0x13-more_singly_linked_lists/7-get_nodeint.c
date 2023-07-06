#include "lists.h"

/**
 * get_nodeint_at_index - to Locates a given node of a listint_t linked list.
 * @head: it is a pointer to the head of the listint_t list.
 * @index: The index of the node to locate - indices start at 0.
 *
 * Return: If the node does not exist - NULL.
 *         Otherwise - the located node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nud;

	for (nud = 0; nud < index; nud++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
