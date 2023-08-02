#include "main.h"

/**
 * _print_rev_recursion - Entry point
 * @s: para
 * Return: void
*/

void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_pritnt_rev_recursion(s + 1);
		_putchar(*s);
	}
}
