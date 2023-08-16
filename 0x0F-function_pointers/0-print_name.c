#include "function.h"

/**
 * print_name - Entry point
 * @name: para
 * @f: para
 * Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
