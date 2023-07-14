#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prtinting numbers from 1 to 10 without using printf
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int n = 0;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');

	return (0);
}
