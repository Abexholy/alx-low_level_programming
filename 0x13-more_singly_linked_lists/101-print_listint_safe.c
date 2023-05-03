#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the first element of the list.
 *
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t number = 0;
	const listint_t *snake = head, *tiger = head;

	while (tiger && tiger->next)
	{
		printf("[%p] %d\n", (void *)snake, snake->n);
		snake = snake->next;
		tiger = tiger->next->next;
		number++;

		if (snake >= tiger)
		{
			printf("[%p] %d\n", (void *)snake, snake->n);
			printf("-> [%p] %d\n", (void *)tiger, tiger->n);
			exit(98);
		}
	}

	if (tiger)
	{
		printf("[%p] %d\n", (void *)snake, snake->n);
		number++;
	}
	return (number);
}

