#include "main.h"

/**
 * flip_bits - tells the no of bits that neede to be fliped
 * @n: para
 * @m: para
 * Return: number of fliped bits
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int ctr = 0;

	while (xor)
	{
		if (xor & 1ul)
			ctr++;
		xor = xor >> 1;
	}
	return (ctr);
}
