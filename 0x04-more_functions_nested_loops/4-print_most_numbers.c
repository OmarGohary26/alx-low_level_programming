#include "main.h"

/**
 * print_most_numbers - print from 1 to 9
 *
 * Return: Always 0 (Success)
*/

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{
			i++;
		}
		else
			_putchar(i + 48);
	}
	_putchar('\n');
}
