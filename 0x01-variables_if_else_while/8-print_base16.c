#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print hexadecimal numbers
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n = 48;

	while (n <= 102)
	{
		putchar(n);

		if (n == 57)
			n += 39;
		n++;
	}
	putchar('\n');

	return (0);
}
