#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the total node at index of
 * dlistint_t linked list in the code
 *
 * @head: this is the head of the list
 * @index: this is the index of the new node
 * Return: to return  1 if it succeeded, and return -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cd1;
	dlistint_t *cd2;
	unsigned int j;

	cd1 = *head;

	if (cd1 != NULL)
		while (cd1->prev != NULL)
			cd1 = cd1->prev;

	j = 0;

	while (cd1 != NULL)
	{
		if (j == index)
		{
			if (j == 0)
			{
				*head = cd1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				cd2->next = cd1->next;

				if (cd1->next != NULL)
					cd1->next->prev = cd2;
			}

			free(cd1);
			return (1);
		}
		cd2 = cd1;
		cd1 = cd1->next;
		j++;
	}

	return (-1);
}
