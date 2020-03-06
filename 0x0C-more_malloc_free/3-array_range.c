#include "holberton.h"
#include <stdlib.h>
/**
 *array_range - creates an array of integers
 *@min: min range
 *@max: max range
 *
 *Return: returns pointer value
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc((max - min + 1) * (sizeof(int)));
	if (ptr == 0)
	{
		return (NULL);
	}
	for (i = 0; i < (max - min + 1); i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}
