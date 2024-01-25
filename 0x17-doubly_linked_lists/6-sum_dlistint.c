#include "lists.h"

/**
 * sum_dlistint - This returns the total sum of all the data (n)
 * of a doubly linked list
 *
 * @head: the head of the list
 * Return: total sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
	int number;

	number = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			number += head->n;
			head = head->next;
		}
	}

	return (number);
}
