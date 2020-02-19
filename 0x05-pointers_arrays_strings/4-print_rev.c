#include "holberton.h"
/**
  *
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
