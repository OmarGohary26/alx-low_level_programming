#include "main.h"

/**
 * _isdigit - checks if it's number
 *
 * @c: input
 *
 * Return: 1 if digit if not 0
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
