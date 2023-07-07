#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int.
 * @b: it is a pointer to a string containing a binary number
 *
 * Return: unsigned int with decimal value of binary number, or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	int p;
	unsigned int toe;

	toe = 0;
	if (!b)
		return (0);
	for (p = 0; b[p] != '\0'; p++)
	{
		if (b[p] != '0' && b[p] != '1')
			return (0);
	}
	for (p = 0; b[p] != '\0'; p++)
	{
		toe <<= 1;
		if (b[p] == '1')
			toe += 1;
	}
	return (toe);
}
