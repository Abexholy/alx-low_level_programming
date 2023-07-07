#include "main.h"

/**
 * get_endianness - Code used to Check the endianness.
 *
 * Return: If big-endian - 0.
 *         If little-endian - 1.
 */
int get_endianness(void)
{
	int gum = 1;
	char *dicx = (char *)&gum;

	if (*dicx == 1)
		return (1);

	return (0);
}
