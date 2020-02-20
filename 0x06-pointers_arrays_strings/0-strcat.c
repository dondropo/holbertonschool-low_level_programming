#include "holberton.h"
/**
 * _strcat - function that concatenates two strings
 * @dest: char that returns the concatenated string
 * @src: char to be concatenated
 * Return: return pointer
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	;
	for (j = 0; src[j] != '\0'; j++, i++)
		dest[i] = src[j];
	return (dest);
}
