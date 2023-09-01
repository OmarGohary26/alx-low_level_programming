#include "main.h"

/**
 * print_last_digit - print the last number
 *
 * @n: takes number input
 *
 * Return: last number
*/

int print_last_digit(int n)
{
	int l;

	if (n < 0)
		l = -1 * (n % 10);
	else
		l = n % 10;

	_putchar(l + '0');
	return (l);
}
