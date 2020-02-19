#include "holberton.h"

/**
 * puts_half - Prints a half of a string (nd half)
 * @str: char *str
 * Return: Void.
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
	}

	if (i % 2 != 0)
	{
		for (i = (((i - 1) / 2) + 1); *(str + i) != '\0'; i++)
			_putchar (*(str + i));
	} else if (i % 2 == 0)
	{
		for (i = i / 2; *(str + i) != '\0'; i++)
			_putchar (*(str + i));
	}

	_putchar ('\n');
}
