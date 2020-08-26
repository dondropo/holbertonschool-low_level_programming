#include "search_algos.h"

/**
* binary_search - Find value element into "array" array
* using binary search
*
* @array: pointer to the array
* @size: size of the array
* @value: the value to be found
*
* Return: mid value in succes. -1 if fails
*/
int binary_search(int *array, size_t size, int value)
{
	int first = 0;
	int last = size - 1;
	int middle, i;

	if (array == NULL)
		return (-1);
	while (first <= last)
	{
		printf("Searching in array: ");
		for (i = first; i <= last; i++)
		{
			printf("%d", array[i]);
			if (i < last)
				printf(", ");
			else
				printf("\n");
		}
		middle = (first + last) / 2;
		if (array[middle] == value)
			return (middle);
		if (array[middle] < value)
			first = middle + 1;
		if (array[middle] > value)
			last = middle - 1;
	}
	return (-1);
}
