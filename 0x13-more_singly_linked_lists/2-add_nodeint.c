#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: double pointer to the head of the list
 * @n: value to store in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *New_number;

	New_number = malloc(sizeof(listint_t));
	if (New_number == NULL)
		return (NULL);

	New_number->n = n;
	New_number->next = *head;
	*head = New_number;

	return (New_number);
}

