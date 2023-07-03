#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *bot;
	list_t *bats = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	bot = malloc(sizeof(list_t));
	if (!bot)
		return (NULL);

	bot->str = strdup(str);
	bot->len = len;
	bot->next = NULL;

	if (*head == NULL)
	{
		*head = bot;
		return (bot);
	}

	while (bats->next)
		bats = bats->next;

	bats->next = bot;

	return (bot);
}
