#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area
 * pointed to by @s with constant byte @c.
 * @s: A pointer to the memory area to be filled in.
 * @b: The character to fill the memory area with.
 * @n: The number bytes to be filled.
 *
 * Return: pointer to the filled memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	char *memory = s, value = b;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
