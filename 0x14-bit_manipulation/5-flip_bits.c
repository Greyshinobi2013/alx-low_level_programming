#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to
 *		flip to get from one number to another
 *
 * @n: first number
 * @m: second number
 *
 * Return: number of bits you would need to flip to get
 *		from one number to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int diff = n ^ m;

	while (diff > 0)
	{
		count += diff & 1;
		diff >>= 1;
	}

	return (count);
}

