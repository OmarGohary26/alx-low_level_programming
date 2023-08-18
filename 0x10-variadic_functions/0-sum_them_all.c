#include "variadic_functions.h"

/**
 * sum_them_all - Entry point
 * @n: para
 * @...: para
 * Return: int
*/

int sum_them_all(const unsigned int n, ...)
{
	int x = 0, i = n;
	va_list va;

	if (!n)
		return (0);
	va_start(va, n);
	while (i--)
		x += va_arg(va, int);
	va_end(va);
	return (x);
}
