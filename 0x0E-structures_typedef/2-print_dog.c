#include "dog.h"

/**
 * print_dog - Entry point
 * @d: para
 * Description: Prints the dog info
*/

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->name);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
