#include "main.h"

/**
 * print_alphabet_x10 - function that will print alphabet 10 times
 *
*/

void print_alphabet_x10(void)
{
	int line;
	int ch;

	for (line = 0; line < 10; line++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
