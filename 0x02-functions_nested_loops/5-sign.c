#include "main.h"

/**
 * print_sign - print + if n > 0 print - if n < 0 print 0 if n = 0
 *
 * @n: takes the int input for the function
 *
 * Return: 1 if + , 0 if 0 and -1 if -
*/

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n > 0)
	{
		_putchar(48);
		return (1);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
