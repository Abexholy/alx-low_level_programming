#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained in listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If there is no loop - NULL.
 *         Otherwise - the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tor, *hre;

	if (head == NULL || head->next == NULL)
		return (NULL);

	tor = head->next;
	hre = (head->next)->next;

	while (hre)
	{
		if (tor == hre)
		{
			tor = head;

			while (tor != hre)
			{
				tor = tor->next;
				hre = hre->next;
			}

			return (tor);
		}

		tor = tor->next;
		hre = (hre->next)->next;
	}

	return (NULL);
}

