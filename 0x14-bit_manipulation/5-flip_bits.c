#include "main.h"

/**
 * flip_bits - This counts all the number of bits needed to be
 *             flipped to get from one number to another.
 * @n: The number.
 * @m: The number to flip n to.
 *
 * Return: The necessary number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xos = n ^ m, bits = 0;

	while (xos > 0)
	{
		bits += (xos & 1);
		xos >>= 1;
	}

	return (bits);
}
