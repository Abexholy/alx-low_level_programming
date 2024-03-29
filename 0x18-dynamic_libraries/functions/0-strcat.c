#include "main.h"

/**
 * _strcat - Concatenates string pointed to by @src,
 * null byte, to the end of total string pointed to by @dest.
 * @dest: A pointer to string to be concatenated upon.
 * @src: Source string to be appended to @dest.
 *
 * Return: Pointer to the destination string @dest.
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
