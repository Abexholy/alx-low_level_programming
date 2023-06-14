#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: create array of size size and assign char c
 * Return: pointer to array, NULL if fail
 *
 */

char *create_array(unsigned int size, char c)
{
	char *st;
	unsigned int j;

	st = malloc(sizeof(char) * size);
	if (size == 0 || st == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
		st[j] = c;
	return (st);
}

