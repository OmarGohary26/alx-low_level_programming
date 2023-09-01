#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all alphabet
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char CH = 'A';
	char ch = 'a';

	/*print a - z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	/*print A - Z*/
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}
