#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - a fun fo rdog a
 * @d: dog st
 * Return: none
 */
void free_dog(dog_t * d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
