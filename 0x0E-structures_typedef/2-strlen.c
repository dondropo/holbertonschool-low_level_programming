#include "holberton.h"
/**
  *_strlen - returns the length of a string
  *@s: variable
  *Return: always c
  */
int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
		;
	return (c);
}
