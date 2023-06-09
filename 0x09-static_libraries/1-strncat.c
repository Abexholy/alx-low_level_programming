#include "main.h"
/**
 * _strncat - concatenate of the two strings
 * using at most n bytes
 * @dest: input value in
 * @src: input value out or inside
 * @n: input value
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
	dest[a] = src[b];
	a++;
	b++;
	}
	dest[a] = '\0';
	return (dest);
}

