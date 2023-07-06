#include "lists.h"

/**
 * sum_listint - Calculates all the sum data (n) of a listint_t list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If the list is empty - 0.
 *         Otherwise - the sum of all the data.
 */
int sum_listint(listint_t *head)
{
	int unm = 0;

	while (head)
	{
		unm += head->n;
		head = head->next;
	}

	return (unm);
}
