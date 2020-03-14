#include "holberton.h"
/**
 *_strspn - gets the length of a prefix substring
 *@s: array that inidcates the initial segment
 *@accept: bytes that indicates the count value of s
 *Return: reurns to counter
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int count;
	int sw;

	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		sw = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				sw = 1;
			}
		}
		if (sw == 0)
			break;
	}
	return (count);
}
