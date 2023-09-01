#include "main.h"

/**
 * clear_bit - clears the bit at the chosen index
 * @n: para
 * @index: para
 * Return: 1 if success , -1 if not
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	if (*n & 1l << index)
		*n ^= 1l << index;
	return (1);
}
