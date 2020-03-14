#include "function_pointers.h"

/**
 *int_index - function that searchs for an integer into an array
 *@array: array where the integer will be searched
 *@size: number of elements inside the array
 *@cmp: pointer to a function to compare values
 *
 *Return: returns i or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if ((*cmp) (array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
