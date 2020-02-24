#include "holberton.h"
/**
 *_strchr - locates a C character in a S string
 *@s: string to find c character
 *@c: character to be found into s string
 *Return: resturns to the string + 1 if c is found and null if it isn't
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
		return ('\0');
}
