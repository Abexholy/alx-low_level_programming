#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *bunr;

	while (head)
	{
		bunr = head->next;
		free(head->str);
		free(head);
		head = bunr;
	}
}

