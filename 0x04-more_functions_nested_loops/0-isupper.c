#include "main.h"

/**
 * _isupper - check if c is upper
 *
 * @c: input
 *
 * Return: 1 if upper if not 0
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
