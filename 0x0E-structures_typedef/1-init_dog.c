#include <stdlib.h>
#include "dog.h"
#include<stdio.h>
/**
 * init_dog - is a function
 * @d: is the name of the structure
 * @name: is a name
 * @age: is the age
 * @owner: is the owner
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
       	d->name = name;
	d->age = age;
	d->owner = owner;
}
