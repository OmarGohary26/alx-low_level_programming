#include "main.h"

/**
 * more_numbers - print from 1 to 14
 *
 * Return: Always 0 (Success)
*/

void more_numbers(void)
{
	int i;

	for (i = 0; i <= 14; i++)
	{
		_putchar(i + 48);
	}
	_putchar('\n');
}
