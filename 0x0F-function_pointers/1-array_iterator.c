#include "function_pointers.h"

/**
 * array_iterator - Entry point
 * @array: para
 * @size: para
 * @action: para
 * Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *l = array + size - 1;

	if (array && size && action)
		while (array <= l)
			action(*array++);
}
