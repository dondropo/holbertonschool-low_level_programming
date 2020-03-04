#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - exercise 3
 * @width: var1
 * @height: var2
 * Return: int type
 */
int **alloc_grid(int width, int height)
{
	int **point;
	int i, j;

	if ((width <= 0) || (height <= 0))
		return (NULL);
	point = malloc(sizeof(int *) * height);

	if (point == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		point[i] = malloc(sizeof(int) * width);
		if (point[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
			{
				free(point[i]);
			}
			free(point);
			return (NULL);
		}
	}
	for (j = 0; j < width; j++)
		point[i] = 0;
	return (point);
}
