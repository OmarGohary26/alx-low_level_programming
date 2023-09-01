#include "variadic_functions.h"

/**
 * print_numbers - Entry point
 * @separator: para
 * @n: para
 * @...: para
 * Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list va;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(va, n);
	while (i--)
		printf("%d%s", va_arg(va, int), i ? (separator ? separator : "") : "\n");
	va_end(va);
}
