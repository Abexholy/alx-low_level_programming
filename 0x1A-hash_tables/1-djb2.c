#include "hash_tables.h"

/**
 * hash_djb2 - This is a function that generates a random number through
 * a string given by the(hash number)
 *
 * @str: the string
 * Return: the hash number
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
