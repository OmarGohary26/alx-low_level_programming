#include <stdio.h>

/**
 * main - Entry point
 * @argc: para
 * @argv: para
 * Return: 0 (success)
*/

int main(int argc, char const *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
