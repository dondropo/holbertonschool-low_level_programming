#include "holberton.h"
#include <stdlib.h>
/**
 *malloc_checked - allocates memory using malloc
 *@b: value of space
 *Return: returns void pointer to allocated mem
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = NULL;/**create the pointer to be returned*/
		if (b == 0)
		{
			exit(98);
		}
		ptr = malloc(b);
		if (ptr == NULL)
		{
			exit(98);
		}
	return (ptr);/**returns pointer to allocated mem*/
}
