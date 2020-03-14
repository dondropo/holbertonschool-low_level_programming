#include "holberton.h"
#include <stdio.h>
/**
 * *_strpbrk - search string
 * @s: array in
 * @accept: char to be searched
 * Return: returns null
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j=0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);

				break;
			}
		}
	}
	return (NULL);
}
