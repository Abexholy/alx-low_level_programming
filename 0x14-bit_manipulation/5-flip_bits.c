#include "main.h"

/**
 * flip_bits - This code counts the number of bits needed to be
 *             flipped to get from one number to another.
 * @n: The number.
 * @m: The number to flip n to.
 *
 * Return: The necessary number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int pox = n ^ m, bits = 0;

	while (pox > 0)
	{
		bits += (pox & 1);
		pox >>= 1;
	}

	return (bits);
}
