#include "lists.h"

/**
 * free_dlistint - This is used to free
 *  dlistint_t list
 *
 * @head: the head of the list
 * Return: nthing is to be returned
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *cmd;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((cmd = head) != NULL)
	{
		head = head->next;
		free(cmd);
	}
}
