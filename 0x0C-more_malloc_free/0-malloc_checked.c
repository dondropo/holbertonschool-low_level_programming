#include "holberton.h"
#include <stdlib.h>
/**
 *malloc_checked - allocates memory using malloc
 *@b: value of space
 *Return: returns void pointer to allocated mem
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);/**create the pointer to be returned*/

	if (b == 0)/**fail case*/
	{
		exit(98);
	}
	return (ptr);/**returns pointer to allocated mem*/
}
