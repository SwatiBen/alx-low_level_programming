#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - fun of struct dog
 * @d: struct dog
 * @name: dog's name
 * @age: age
 * @owner: owns dog
 * Return: none
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->owner = owner;
		d->age = age;
	}
}
