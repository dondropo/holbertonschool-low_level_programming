#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array, followed by a \n
 * @a: * first element to be printed
 * @n: number of array to be printed
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *a++);
		if (i < n - 1)
			printf(", ");
	}
	putchar('\n');
}
