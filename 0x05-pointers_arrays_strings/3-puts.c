#include "holberton.h"
/**
  *_puts - print a string
  *@str: string
  */
void _puts(char *str)
{
	int p;

	for (p = 0; str[p] != '\0'; p++)
	_putchar(str[p]);
	_putchar('\n');
}
