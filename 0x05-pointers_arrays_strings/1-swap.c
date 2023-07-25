#include "main.h"

/**
 * swap_int - swap values
 *
 * @a: 1st input
 * @b: 2md input
 *
 * Return: Nothing
*/

void swap_int(int *a, int *b)
{

	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
