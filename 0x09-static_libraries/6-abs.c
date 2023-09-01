#include "main.h"
/**
 * _abs - function to get the absolute of a number
 *
 * @n: takes int type input
 *
 * Return: Always 0 (success)
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
