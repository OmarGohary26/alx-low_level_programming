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
		_puthchar('\n');
	else
	{
		for (d = 1; d <= n; d++)
		{
			for (l = 1; l <= d; l++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
