#include "main.h"

/**
 * _islower - function to check if char is lower case
 *
 *
 * @c: checks the input of the function
 *
 * Return: return 1 if 'c' is lowercase if not returns Always 0 (Success)
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
