#include "holberton.h"
/**
  *print_rev - prints a string in reverse
  *@s: string to reverse
  */
void print_rev(char *s)
{
	int p;
	int y;

	for (p = 0; s[p] != '\0'; p++)
	{
	}
	p--;
	for (y = p; y >= 0; y--)
	{
		_putchar(s[y]);
	}
	_putchar('\n');
}
