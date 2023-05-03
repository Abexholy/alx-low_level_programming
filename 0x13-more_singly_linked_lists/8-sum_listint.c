#include "lists.h"

/**
* sum_listint - Returns sum of all the data (n) of a listint_t linked list.
* @head: A pointer to the head node of the list.
*
* Return: The sum of data (n) of the linked list.
*/
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *flow = head;

	while (flow)
	{
		sum += flow->n;
		flow = flow->next;
	}

	return (sum);
}

