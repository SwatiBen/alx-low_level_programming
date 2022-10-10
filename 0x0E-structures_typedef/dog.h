#ifndef DOG_H_
#define DOG_H_
/**
 * struct dog - structure of dog
 * @name: dog name
 * @age: dog's age
 * @owner: dog's owner
 */
struct dog
{
	char *owner;
	char *name;
	float age;
};

type struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, char *owner, float age);
void free_dog(dog_t *d);

#endif
