#include "main.h"
/**
 * _abs - a function that computes absolute value of an integer
 * @ab: The integer input
 * Return: Absolute value of ab
 */
int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}
