#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of the listint_t linked list.
 * @head: pointer to the head node of list.
 * @index: index of the node return, starting from 0.
 *
 * Return: If node at the given index exists, return a pointer to it.
 * Otherwise, return NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *boy = head;
	unsigned int b = 0;

	while (boy != NULL)
	{
		if (b == index)
			return (boy);
		b++;
		boy = boy->next;
	}
	return (NULL);
}

