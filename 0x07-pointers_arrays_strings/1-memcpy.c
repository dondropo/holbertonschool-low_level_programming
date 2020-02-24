#include "holberton.h"
/**
 *_memcpy - function that copies a memory area
 *@dest: destination variable of memory space copied
 *@src: source of memory space to be copied
 *@n: space to be copied
 *Return: returns to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
