#include "holberton.h"
#include <stdlib.h>
/**
 *create_array - creates an array initialized with a specific char
 *@size: array to be created
 *@c: value to be inserted
 *Return: returns final value of array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int counter;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		array = malloc(sizeof(char) * size);
		if (array == NULL)
		{
			return (NULL);
		}
		else
		{
			for (counter = 0; counter < size; counter++)
			{
				array[counter] = c;
			}
			return (array);
		}
	}
}
