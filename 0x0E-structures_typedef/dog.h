#ifndef DOG_H
#define DOG_H
/**
 *struct dog - dog struct
 *@name:dog's name
 *@age:dog's age
 *@owner:dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
/**void free_dog(dog_t *d);*/

#endif
