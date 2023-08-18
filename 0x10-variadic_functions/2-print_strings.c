#include "variadic_funtions.h"

/**
 * print_string - Entry point
 * @separator: para
 * @n: para
 * @...: para
 * Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	char *str;
	va_list va;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(va, n);
	while (i--)
		printf("%s%s", (str = va_arg(va, char *)) ? str : "(nil)", i ? (separator ? separator : "") : "\n");
	va_end(va);
}
