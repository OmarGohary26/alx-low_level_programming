#include "main.h"

/**
 * print_diagonal - print a diagonal
 *
 * @n: input
 *
*/

void print_diagonal(int n)
{
	int l, d;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (d = 0; d < n; d++)
		{
			for (l = 0; l <= d; l++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
