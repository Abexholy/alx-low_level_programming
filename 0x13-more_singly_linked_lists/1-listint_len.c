#include <list.h>
#include <stddef.h>
#include <stdio.h>
/**
 * listint_t - retutns The number of element in linked
 *
 * @h: the header
 *
 * Return: return the number of elements
 *
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{h = h->next;
		count++;
	}
	return (count);
}
