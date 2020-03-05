#include "holberton.h"
#include <stdlib.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1, size2, i, j;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (size1 = 0; s1[size1] != '\0'; size1++)/**go thru s1*/
		;
	for (size2 = 0; s2[size2] != '\0'; size2++)/**go thru s2*/
		;
	if (n > size2)
	{
		n = size2;
	}
	ptr = malloc(size1 + n + 1);/**create space to be filled*/
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)/**fill up ptr with s1 content*/
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < n; j++)/**fill up ptr with s2 content*/
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
