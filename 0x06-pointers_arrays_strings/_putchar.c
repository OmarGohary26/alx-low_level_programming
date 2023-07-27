#include <unistd.h>

/**
 * _putchar - write the char
 * @c: parameter
 * Return: On success 1.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
