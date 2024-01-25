#include "lists.h"

/**
 * insert_dnodeint_at_index - this will inserts a new node at
 * a particular position
 *
 * @h: the head of the lists
 * @idx: the total index of the new node
 * @n: the total value of the new node
 * Return: the address of the new node made, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *neat;
	dlistint_t *neck;
	unsigned int j;

	neat = NULL;
	if (idx == 0)
		neat = add_dnodeint(h, n);
	else
	{
		neck = *h;
		j = 1;
		if (neck != NULL)
			while (neck->prev != NULL)
				neck = neck->prev;
		while (neck != NULL)
		{
			if (j == idx)
			{
				if (neck->next == NULL)
					neat = add_dnodeint_end(h, n);
				else
				{
					neat = malloc(sizeof(dlistint_t));
					if (neat != NULL)
					{
						neat->n = n;
						neat->next = neck->next;
						neat->prev = neck;
						neck->next->prev = neat;
						neck->next = neat;
					}
				}
				break;
			}
			neck = neck->next;
			j++;
		}
	}

	return (neat);
}
