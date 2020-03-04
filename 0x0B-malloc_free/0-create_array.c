#include "holberton.h"
#include <stdlib.h>

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
