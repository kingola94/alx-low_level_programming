#include <string.h>
#include "dog.h"
/**
 * init_dog - check code
 * @d: Pointer to struct
 * @name: dog name
 * @age: dog age
 * @owner: owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
