#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - Entry point
 * @s: para
 * Return: int
*/

int _strlen(const char *s)
{
	int l = 0;

	while (*s++)
		l++;
	return (l);
}

/**
 * _strcpy - Entry point
 * @dest: para
 * @src: para
 * Return: int
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - Entry point
 * @name: para
 * @age: para
 * @owner: para
 * Return: struct
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (!name || age < 0 || !owner)
		return (NULL);

	d = (dog_t *) malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*d).name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*d).owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	d->name = _strcpy(d->name, name);
	d->age = age;
	d->owner = _strcpy(d->owner, owner);

	return (d);
}
