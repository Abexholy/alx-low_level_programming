#include "lists.h"
/**
 * add_dnodeint - this adds a new node to the code at the beginning
 * of a dlistint_t lists
 *
 * @head: the head of the list
 * @n: value of the element
 * Return: the total address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *wow;
	dlistint_t *i;

	wow = malloc(sizeof(dlistint_t));
	if (wow == NULL)
		return (NULL);

	wow->n = n;
	wow->prev = NULL;
	i = *head;

	if (i != NULL)
	{
		while (i->prev != NULL)
			i = i->prev;
	}

	wow->next = i;

	if (i != NULL)
		i->prev = wow;

	*head = wow;

	return (wow);
}
