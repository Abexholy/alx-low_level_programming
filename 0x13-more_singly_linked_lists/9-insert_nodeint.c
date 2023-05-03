#include <stdlib.h>
#include "lists.h"

/**
* insert_nodeint_at_index -puts new node at a given position.
* @head: pointer to pointer to the first node of the list
* @idx: index  list where the new node should be added. Index starts at 0
* @n: value to be added in the new node
*
* Return: address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int node = 0;
	listint_t *New_number, *fill;

	if (head == NULL)
		return (NULL);

	New_number, = malloc(sizeof(listint_t));
	if (New_number == NULL)
		return (NULL);

	New_number->n = n;
	if (idx == 0)
	{
		New_number->next = *head;
		*head = New_number;
		return (New_number);
	}

	fill = *head;
	while (fill != NULL)
	{
		if (node == idx - 1)
		{
		New_number->next = temp->next;
		fill->next = New_number;
		return (New_number);
		}
		node++
			temp = temp->next
	}

	free(New_number);
	return (NULL);
}

