#include "dog.h"
#include <stdlib.h>
/**
 *init_dog - initialize var of type struct dog
 *@d: pointer to dog's
 *@name: name of the dog
 *@age: dog's age
 *@owner: dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
	}
}
