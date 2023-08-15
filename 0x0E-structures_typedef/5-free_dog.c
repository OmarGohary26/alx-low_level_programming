#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Entry point
 * @dog: para
 * Return: void
*/

void free_dog(dog_t *dog)
{
	if (dog)
	{
		if (dog->name)
			free(dog->name);
		if (dog->owner)
			free(dog->owner);
		free(dog);
	}
}
