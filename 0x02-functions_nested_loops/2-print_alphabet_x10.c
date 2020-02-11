#include "holberton.h"
/**
* print_alphabet_x10 - Entry point
*
* Return: void
*/
void print_alphabet_x10(void)
{
	char alphabet;
	int n = 0;

	while (n < 10)
	{
	alphabet = 'a';
	while (alphabet <= 'z')
	{
	_putchar(alphabet);
	alphabet++;
	}
	_putchar('\n');
	n++;
	}
}
