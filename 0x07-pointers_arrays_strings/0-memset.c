#include "holberton.h"
/**
 *_memset - function that fills n spaces of memory with a constant byte (b)
 *@s: memory area
 *@b: constant byte
 *@n: number of spaces to be filled
 *Return: returns to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
