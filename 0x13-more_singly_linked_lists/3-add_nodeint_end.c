#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: double pointer to the head of the list
 * @n: value to store in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *My_number, *first_lane;

	My_number = malloc(sizeof(listint_t));
	if (My_number == NULL)
		return (NULL);

	My_number->n = n;
	My_number->next = NULL;

	if (*head == NULL)
	{
		*head = My_number;
		return (My_number);
	}

	first_lane = *head;
	while (first_lane->next != NULL)
		first_lane = first_lane->next;

	first_lane->next = My_number;

	return (My_number);
}

