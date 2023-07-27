#include "main.h"

/**
 * *string_toupper - make the lowercase to uppercase
 *
 * @str: 1st parameter
 * Return: string
*/

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
