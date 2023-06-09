#include "main.h"
/**
 *_memcpy - a function thatmakes copy of the memory
 *@dest: memory where is stored or the memory storage
 *@src: memory location where it is copied
 *@n: number of bytes
 *
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int s = 0;
	int i = n;

	for (; s < i; s++)
	{
		dest[s] = src[s];
		n--;
	}
	return (dest);
}

