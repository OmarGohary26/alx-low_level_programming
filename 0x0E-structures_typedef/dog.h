#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Entry point
 * @name: vara
 * @age: vara
 * @owner: vara
 * Description: struct to create dog info
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
