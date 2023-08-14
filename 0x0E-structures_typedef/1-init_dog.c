#include "dog.h"
/**
 * init_dog - Entry point
 * @d: para
 * @name: para
 * @age: para
 * @owner: para
 * Description: initlaize the dog properties
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
