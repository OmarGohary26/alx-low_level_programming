#include "main.h"

/**
 * _atoi - Entry point
 * @s: para
 * Return: int
*/

int _atoi(char *s)
{
	unsigned int sign = 0;
	int sig = 1, i = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			sig += -1;
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		sign = (sign * 10) + (s[i] - '0');
		i++;
	}
	sign *= sig;
	return (sign);
}
