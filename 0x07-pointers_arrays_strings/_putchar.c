#include <unistd.h>

/**
 * _putchar - print a char
 * @c: 1st parameter
 * Return: On success 1.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
