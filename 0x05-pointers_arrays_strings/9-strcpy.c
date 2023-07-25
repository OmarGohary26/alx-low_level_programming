#include "main.h"

/**
 * *_strcpy - copies the string to by src
 * @dest: 1st-parameter
 * @src: 2nd parameter
 * Return: void
*/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
