#include "main.h"

/**
 * print_line - print a straight line
 *
 * @n: is the number of times to print { _ } char
 *
*/

void print_line(int n)
{
	int l;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (l = 0; l <= n; l++)
			_putchar('_');
		_putchar('\n');
	}
}
