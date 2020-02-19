#include "holberton.h"

/**
 * _strcpy - copies the string pointed to by src including null (\0)
 * @dest: destination to copy
 * @src: source of t
 * Return: char * to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		++i;
	}
	*(dest + i) = *(src + i);

	return (dest);
}
