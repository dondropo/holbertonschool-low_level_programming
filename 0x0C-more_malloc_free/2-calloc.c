#include "holberton.h"
#include <stdlib.h>
/**
 *_calloc - allocates memory for an array using malloc
 *@nmemb: number of memebers
 *@size: size of an array
 *Return: returns the pointer value
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)/**in case of fail*/
	{
		return (NULL);
	}
	ptr = malloc(size*nmemb);/**create dynamic space*/
	if (ptr == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size * nmemb; i++)/**go thru the entire space, using i counter*/
	{
		ptr[i] = 0;
	}
	return (ptr);/**returns pointer value*/
}
