#include "holberton.h"
/**
 *_strlen_recursion - function that returns the length of a string
 *@s: string for be calculated
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s == '\0')
	{
		return (0);
	}
		n = _strlen_recursion(s + 1);
		return (1 + n);
}
