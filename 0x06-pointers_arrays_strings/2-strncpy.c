#include "holberton.h"
/**
 *_strncpy - makes a copy of a string
 *@dest: variable to copy the string
 *@src: variable to be coppied
 *@n: bytes to be traveled
 *Return: return (dest)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
