#include "main.h"

/**
 * _memcpy - Copies the @n bytes from the memory area pointed
 * to by @src into that pointed to by @dest.
 * @dest: pointer to the memory area to copy @src into.
 * @src: source buffer to copy characters from.
 * @n: number of bytes to copy from @src.
 *
 * Return: A pointer to the destination buffer @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;
	char *destination = dest;
	char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];

	return (dest);
}
