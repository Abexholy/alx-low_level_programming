#include "main.h"

/**
 * char *_strcpy - This is a  function that copies the string pointed to by src
 * @dest: copy location
 * @src: copy destination
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (*(src + a) != '\0')
	{
		a++;
	}
	for ( ; b < a ; b++)
	{
		dest[b] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}

