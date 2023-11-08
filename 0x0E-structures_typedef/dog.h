#ifndef DOG_H
#define DOG_H
/**
 * struct dog - is a structure
 * @name: is a name
 * @age: is a float
 * @owner: is a char
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
