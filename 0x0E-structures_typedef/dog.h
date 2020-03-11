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

int _strlen(char *s);
char *_memcpy(char *dest, char *src, unsigned int n);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
