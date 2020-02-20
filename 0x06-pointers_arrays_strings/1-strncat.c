#include "holberton.h"
/**
 *_strncat - function that concatenates two files
 *@dest: returns concatenated string
 *@src: string to be concatenated into dest
 *@n: bytes that dest has to use from src
 *Return: returns dest's concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; j < n && src[j] != '\0'; i++, j++)
		dest[i] = src[j];

		return (dest);
}
