#include "main.h"
/**
 * set_bit - Entry point
 * @n: para
 * @index: para
 * Return: 1 on success, -1 on failure
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (!!(*n |= 1l << index));
}
